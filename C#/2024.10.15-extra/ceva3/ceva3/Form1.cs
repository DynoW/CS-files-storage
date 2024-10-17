using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ceva3
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        int ct = 0;
        private void timer1_Tick(object sender, EventArgs e)
        {
            label2.Text = ct.ToString();
            ct++;
        }

        private void button1_Click(object sender, EventArgs e)
        { int n;
            //if (radioButton2.Checked == true)
            //    pictureBox1.Image = imageList1.Images[0];
            //else pictureBox1.Image = imageList1.Images[1];
            n = int.Parse(textBox1.Text);
            textBox1.Text = (n * 10).ToString();
        }
    }
}
