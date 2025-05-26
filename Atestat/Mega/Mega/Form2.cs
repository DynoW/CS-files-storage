using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Windows.Forms;

namespace Mega
{
    public partial class Form2 : Form
    {
        private Ball ball;
        private List<Brick> bricks;
        private int score;
        private bool isBallLaunched;

        public Form2()
        {
            InitializeComponent();
            InitializeGame();
        }

        private void InitializeGame()
        {
            this.DoubleBuffered = true;
            this.Width = 800;
            this.Height = 600;

            Point center = new Point(this.Width / 2 - 25, this.Height - 100);

            if (ball == null)
                ball = new Ball(center, new Size(50, 50));
            else
                ball.ResetPosition(center);

            if (bricks == null)
                bricks = new List<Brick>();
            else
                bricks.Clear();

            score = 0;
            isBallLaunched = false;

            label1.Text = "Score: 0";

            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 10; j++)
                {
                    bricks.Add(new Brick(new Point(60 + j * 60, 50 + i * 30), new Size(50, 20)));
                }
            }

            timer1.Start();
        }

        private void Form2_MouseClick(object sender, MouseEventArgs e)
        {
            if (!isBallLaunched)
            {
                Point target = new Point(
                    e.Location.X - ball.Bounds.Width / 2,
                    e.Location.Y
                );
                ball.SetDirection(target);
                isBallLaunched = true;
            }
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            if (isBallLaunched)
            {
                ball.Move();
                CheckCollisions();
            }
            this.Invalidate();
        }

        private void CheckCollisions()
        {
            if (ball.Position.X < 0 || ball.Position.X > this.Width || ball.Position.Y < 0 || ball.Position.Y > this.Height)
            {
                ResetBall();
            }

            for (int i = bricks.Count - 1; i >= 0; i--)
            {
                if (ball.Bounds.IntersectsWith(bricks[i].Bounds))
                {
                    bricks.RemoveAt(i);
                    score++;
                    label1.Text = "Score: " + score;

                    if (bricks.Count == 0)
                    {
                        timer1.Stop();
                        using (Form3 form3 = new Form3())
                        {
                            if (form3.ShowDialog() == DialogResult.OK)
                            {
                                InitializeGame();
                            }
                            else
                            {
                                this.Close();
                            }
                        }
                    }
                }
            }
        }

        private void ResetBall()
        {
            Point center = new Point(this.Width / 2 - 25, this.Height - 100);
            ball.ResetPosition(center);
            isBallLaunched = false;
        }

        private void Form2_Paint(object sender, PaintEventArgs e)
        {
            ball?.Draw(e.Graphics);
            if (bricks != null)
            {
                foreach (var brick in bricks)
                {
                    brick.Draw(e.Graphics);
                }
            }
        }
    }

    public class Ball
    {
        public Point Position { get; private set; }
        private Size size;
        private Point direction;
        private Image image;
        private const int speed = 15;

        public Ball(Point position, Size size)
        {
            Position = position;
            this.size = size;
            direction = Point.Empty;
            image = Properties.Resources.ball;
        }

        public void SetDirection(Point target)
        {
            int dx = target.X - Position.X;
            int dy = target.Y - Position.Y;
            double distance = Math.Sqrt(dx * dx + dy * dy);
            direction = new Point((int)(dx / distance * speed), (int)(dy / distance * speed));
        }

        public void Move()
        {
            if (direction != Point.Empty)
            {
                Position = new Point(Position.X + direction.X, Position.Y + direction.Y);
            }
        }

        public void ResetPosition(Point center)
        {
            Position = center;
            direction = Point.Empty;
        }

        public void Draw(Graphics g)
        {
            g.DrawImage(image, new Rectangle(Position, size));
        }

        public Rectangle Bounds => new Rectangle(Position, size);
    }

    public class Brick
    {
        public Point Position { get; private set; }
        private Size size;
        private Image image;

        public Brick(Point position, Size size)
        {
            Position = position;
            this.size = size;
            image = Properties.Resources.brick;
        }

        public void Draw(Graphics g)
        {
            g.DrawImage(image, new Rectangle(Position, size));
        }

        public Rectangle Bounds => new Rectangle(Position, size);
    }
}