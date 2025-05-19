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
        int ct = 0;
        private void button1_Click(object sender, EventArgs e)
        {
            if (radioButton2.Checked == true)
                ct++;
            if (radioButton6.Checked == true)
                ct++;
            if (radioButton9.Checked == true)
                ct++;
            if (radioButton13.Checked == true)
                ct++;
            if (radioButton19.Checked == true)
                ct++;
            if (radioButton21.Checked == true)
                ct++;
            if (radioButton27.Checked == true)
                ct++;
            if (radioButton30.Checked == true)
                ct++;
            if (radioButton33.Checked == true)
                ct++;
            if (radioButton39.Checked == true)
                ct++;
            textBox1.Text = ct.ToString();
            if (ct < 5)
                pictureBox1.Image = imageList1.Images[0];
            else
                pictureBox1.Image = imageList1.Images[1];
        }
    }
}
