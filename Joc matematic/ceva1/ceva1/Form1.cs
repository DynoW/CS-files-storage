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
        
        private void button1_Click(object sender, EventArgs e)
        {
            global.nr_intrebare = 1;
            global.text = "1+2=?";
            global.rasp_bun = 3;
            global.rasp[1] = 1;
            global.rasp[2] = 2;
            global.rasp[3] = 3;
            global.rasp[4] = 4;
            global.f.ShowDialog();
        }

        private void Form1_Activated(object sender, EventArgs e)
        {
            if (global.nr_intrebare == 1)
            {
                button1.Enabled = false;
                button1.Text = "1+3";
            }
            if (global.nr_intrebare == 2)
            {
                button2.Enabled = false;
                button2.Text = "2-1";
            }
            if (global.nr_intrebare == 3)
            {
                button3.Enabled = false;
                button3.Text = "2+2";
            }
            if (global.nr_intrebare == 4)
            {
                button4.Enabled = false;
                button4.Text = "3-2";
            }
            if (global.nr_intrebare == 5)
            {
                button5.Enabled = false;
                button5.Text = "3-1";
            }
            if (global.nr_intrebare == 6)
            {
                button6.Enabled = false;
                button6.Text = "5-1";
            }
            if (global.nr_intrebare == 7)
            {
                button7.Enabled = false;
                button7.Text = "5-3";
            }
            if (global.nr_intrebare == 8)
            {
                button8.Enabled = false;
                button8.Text = "10-6";
            }
            if (global.nr_intrebare == 9)
            {
                button9.Enabled = false;
                button9.Text = "Good job!";
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            global.nr_intrebare = 2;
            global.text = "1+3=?";
            global.rasp_bun = 4;
            global.rasp[1] = 1;
            global.rasp[2] = 2;
            global.rasp[3] = 3;
            global.rasp[4] = 4;
            global.f.ShowDialog();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            global.nr_intrebare = 3;
            global.text = "2-1=?";
            global.rasp_bun = 1;
            global.rasp[1] = 1;
            global.rasp[2] = 2;
            global.rasp[3] = 3;
            global.rasp[4] = 4;
            global.f.ShowDialog();
        }

        private void button4_Click(object sender, EventArgs e)
        {
            global.nr_intrebare = 4;
            global.text = "2+2=?";
            global.rasp_bun = 4;
            global.rasp[1] = 1;
            global.rasp[2] = 2;
            global.rasp[3] = 3;
            global.rasp[4] = 4;
            global.f.ShowDialog();
        }

        private void button5_Click(object sender, EventArgs e)
        {
            global.nr_intrebare = 5;
            global.text = "3-2=?";
            global.rasp_bun = 1;
            global.rasp[1] = 1;
            global.rasp[2] = 2;
            global.rasp[3] = 3;
            global.rasp[4] = 4;
            global.f.ShowDialog();
        }

        private void button6_Click(object sender, EventArgs e)
        {
            global.nr_intrebare = 6;
            global.text = "3-1=?";
            global.rasp_bun = 2;
            global.rasp[1] = 1;
            global.rasp[2] = 2;
            global.rasp[3] = 3;
            global.rasp[4] = 4;
            global.f.ShowDialog();
        }

        private void button7_Click(object sender, EventArgs e)
        {
            global.nr_intrebare = 7;
            global.text = "5-1=?";
            global.rasp_bun = 4;
            global.rasp[1] = 1;
            global.rasp[2] = 2;
            global.rasp[3] = 3;
            global.rasp[4] = 4;
            global.f.ShowDialog();
        }

        private void button8_Click(object sender, EventArgs e)
        {
            global.nr_intrebare = 8;
            global.text = "5-3=?";
            global.rasp_bun = 2;
            global.rasp[1] = 1;
            global.rasp[2] = 2;
            global.rasp[3] = 3;
            global.rasp[4] = 4;
            global.f.ShowDialog();
        }

        private void button9_Click(object sender, EventArgs e)
        {
            global.nr_intrebare = 9;
            global.text = "10-6=?";
            global.rasp_bun = 4;
            global.rasp[1] = 1;
            global.rasp[2] = 2;
            global.rasp[3] = 3;
            global.rasp[4] = 4;
            global.f.ShowDialog();
        }
    }
}
