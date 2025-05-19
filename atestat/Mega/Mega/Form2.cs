using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Windows.Forms;

namespace Mega
{
    public partial class Form2 : Form
    {
        private System.Windows.Forms.Timer gameTimer;
        private Ball ball;
        private List<Brick> bricks;
        private int score;
        private Label scoreLabel;
        private Random random;
        private bool isBallLaunched;

        public Form2()
        {
            InitializeComponent();
            InitializeScoreLabel();
            InitializeGame();
        }

        private void InitializeScoreLabel()
        {
            scoreLabel = new Label
            {
                Location = new Point(this.Width - 160, 10),
                Size = new Size(140, 30),
                Text = "Score: 0",
                ForeColor = Color.Black,
                BackColor = Color.Transparent,
                Font = new Font("Arial", 14, FontStyle.Bold)
            };
            this.Controls.Add(scoreLabel);
        }

        private void InitializeGame()
        {
            this.DoubleBuffered = true;
            this.Width = 800;
            this.Height = 600;

            Point center = new Point(this.Width / 2 - 25, this.Height - 100);
            ball = new Ball(center, new Size(50, 50));
            bricks = new List<Brick>();
            score = 0;
            random = new Random();
            isBallLaunched = false;

            scoreLabel.Text = "Score: 0";

            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 10; j++)
                {
                    bricks.Add(new Brick(new Point(60 + j * 60, 50 + i * 30), new Size(50, 20)));
                }
            }

            gameTimer = new System.Windows.Forms.Timer();
            gameTimer.Interval = 20;
            gameTimer.Tick += GameTimer_Tick;
            gameTimer.Start();

            this.Paint += Form2_Paint;
            this.MouseClick += Form2_MouseClick;
        }

        private void Form2_MouseClick(object sender, MouseEventArgs e)
        {
            if (!isBallLaunched)
            {
                ball.LaunchTowards(e.Location);
                isBallLaunched = true;
            }
        }

        private void GameTimer_Tick(object sender, EventArgs e)
        {
            if (isBallLaunched)
            {
                ball.Move();
                CheckCollisions();
                this.Invalidate();
            }
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
                    ResetBall();
                    score++;
                    scoreLabel.Text = $"Score: {score}";

                    if (bricks.Count == 0)
                    {
                        gameTimer.Stop();
                        using (Form3 form3 = new Form3())
                        {
                            if (form3.ShowDialog() == DialogResult.OK)
                            {
                                DisposeOldGame();
                                InitializeGame();
                                InitializeScoreLabel();
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

        private void DisposeOldGame()
        {
            if (gameTimer != null)
            {
                gameTimer.Stop();
                gameTimer.Tick -= GameTimer_Tick;
                gameTimer.Dispose();
                gameTimer = null;
            }

            if (bricks != null)
            {
                bricks.Clear();
                bricks = null;
            }

            if (ball != null)
            {
                ball = null;
            }

            if (scoreLabel != null)
            {
                this.Controls.Remove(scoreLabel);
                scoreLabel.Dispose();
                scoreLabel = null;
            }

            this.Paint -= Form2_Paint;
            this.MouseClick -= Form2_MouseClick;
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

        public void LaunchTowards(Point target)
        {
            SetDirection(target);
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