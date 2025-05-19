using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace KAT_Clicker
{
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }
        int scor = 0;
        int ct1 = 0;
        private void pictureBox4_Click(object sender, EventArgs e)
        {
            pictureBox4.Visible = false;
            timer1.Enabled = true;
        }
        Random r = new Random();
        int v = 0;
        private void timer1_Tick(object sender, EventArgs e)
        {
            ct1++;
            if (ct1 >= 4)
            {
                pictureBox4.Visible = true;
                ct1 = 0;
                timer1.Enabled = false;
            }
            if (v == 0)
            {
                v = 1;
                pictureBox3.Location = new Point(350 + r.Next(0,100), 10);
            }
            pictureBox3.Location = new Point(pictureBox3.Location.X, pictureBox3.Location.Y+20);
            if (pictureBox3.Location.Y >= 350)
            {
                v = 0;
                scor++;
                label1.Text = "Scor: " + scor.ToString();
            }
                
        }
    }
}
