using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ceva1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        int dx, dy;

        private void timer1_Tick(object sender, EventArgs e)
        {
            int x, y;
            x = pictureBox1.Location.X + dx;
            y = pictureBox1.Location.Y + dy;
            if (y < 0 || y > this.Height - pictureBox1.Height)
                dy = -dy;
            if (x < 0 || x > this.Width - pictureBox1.Width)
                dx = -dx;
            pictureBox1.Location = new Point(x, y);
            if (pictureBox1.Bounds.IntersectsWith(pictureBox2.Bounds))
            {
                timer1.Stop();
                MessageBox.Show("Fluturele a gasit floarea");
            }
        }
        Random r = new Random();
        private void pictureBox1_Click(object sender, EventArgs e)
        {
            dx = dy = r.Next(30);
            timer1.Start();
        }
    }
}
