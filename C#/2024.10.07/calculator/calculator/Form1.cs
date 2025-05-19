using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace calculator
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        int n1 = -1, p1 = 1, n2 = -1, p2=1, op=0;
        void da(int n)
        {
            if (op == 0)
            {
                if (n1 == -1)
                    n1 = n;
                else
                {
                    n1 = n1 * 10 + n;
                    // p1 *= 10;
                }
                textBox1.Text = n1.ToString();
            }
            else
            {
                if (n2 == -1)
                    n2 = n;
                else
                {
                    n2 = n2 * 10 + n;
                    // p1 *= 10;
                }
                textBox1.Text = n2.ToString();
            }
        }
        private void button1_Click(object sender, EventArgs e)
        {
            da(1);
        }

        private void button2_Click(object sender, EventArgs e)
        {
            da(2);
        }

        private void button3_Click(object sender, EventArgs e)
        {
            da(3);
        }

        private void button4_Click(object sender, EventArgs e)
        {
            da(4);
        }

        private void button5_Click(object sender, EventArgs e)
        {
            da(5);
        }

        private void button6_Click(object sender, EventArgs e)
        {
            da(6);
        }

        private void button7_Click(object sender, EventArgs e)
        {
            da(7);
        }

        private void button8_Click(object sender, EventArgs e)
        {
            da(8);
        }

        private void button9_Click(object sender, EventArgs e)
        {
            da(9);
        }

        private void button10_Click(object sender, EventArgs e)
        {
            da(0);
        }

        private void button11_Click(object sender, EventArgs e)
        {
            op = 1;
            textBox1.Text = "+";
        }

        private void button12_Click(object sender, EventArgs e)
        {
            op = 2;
            textBox1.Text = "-";
        }

        private void button13_Click(object sender, EventArgs e)
        {
            op = 3;
            textBox1.Text = "*";
        }

        private void button14_Click(object sender, EventArgs e)
        {
            op = 4;
            textBox1.Text = "/";
        }

        private void button15_Click(object sender, EventArgs e)
        {
            if (op == 1)
            {
                textBox1.Text = (n1 + n2).ToString();
            }
            else if (op == 2)
            {
                textBox1.Text = (n1 - n2).ToString();
            }
            else if (op == 3)
            {
                textBox1.Text = (n1 * n2).ToString();
            }
            else if (op == 4)
            {
                textBox1.Text = (n1 / n2).ToString();
            }
        }
    }
}
