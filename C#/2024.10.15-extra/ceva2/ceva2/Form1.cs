using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ceva2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int x = pictureBox1.Location.X;
            int y = pictureBox1.Location.Y;
            pictureBox1.Location = new Point(x, y-10);
        }

        private void button4_Click(object sender, EventArgs e)
        {
            int x = pictureBox1.Location.X;
            int y = pictureBox1.Location.Y;
            pictureBox1.Location = new Point(x, y + 10);
        }

        private void button2_Click(object sender, EventArgs e)
        {
            int x = pictureBox1.Location.X;
            int y = pictureBox1.Location.Y;
            pictureBox1.Location = new Point(x - 10, y);
        }

        private void button3_Click(object sender, EventArgs e)
        {
            int x = pictureBox1.Location.X;
            int y = pictureBox1.Location.Y;
            pictureBox1.Location = new Point(x + 10, y);
        }

        private void button5_Click(object sender, EventArgs e)
        {
            if (pictureBox1.Bounds.IntersectsWith(pictureBox2.Bounds))
            {
                MessageBox.Show("Teddy");
                Random r = new Random();
                pictureBox2.Location = new Point(r.Next(10,1000),pictureBox2.Location.Y);


            }
              
            
        }
    }
}
