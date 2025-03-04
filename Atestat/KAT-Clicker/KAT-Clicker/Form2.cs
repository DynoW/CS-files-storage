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
        private void pictureBox2_Click(object sender, EventArgs e)
        {
            pictureBox2.Visible = false;
            timer1.Enabled = true;
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            ct1++;
            if (ct1 >= 4)
            {
                pictureBox2.Visible = true;
                ct1 = 0;
                timer1.Enabled = false;
                scor++;
                label1.Text = "Scor: " + scor.ToString();
            }
        }
    }
}
