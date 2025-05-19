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
        int b1 = 0;
        int b2 = 0;
        int b3 = 0;
        int b4 = 0;
        int b5 = 0;
        int b6 = 0;
        int b7 = 0;
        int b8 = 0;
        int b9 = 0;
        int cv(int n, int b)
        {
            n++;
            if (n == 1)
                switch (b) {
                    case 1:
                        button1.Text = "X";
                        break;
                    case 2:
                        button2.Text = "X";
                        break;
                    case 3:
                        button3.Text = "X";
                        break;
                    case 4:
                        button4.Text = "X";
                        break;
                    case 5:
                        button5.Text = "X";
                        break;
                    case 6:
                        button6.Text = "X";
                        break;
                    case 7:
                        button7.Text = "X";
                        break;
                    case 8:
                        button8.Text = "X";
                        break;
                    case 9:
                        button9.Text = "X";
                        break;
                }
            else if (n == 2)
                switch (b)
                {
                    case 1:
                        button1.Text = "O";
                        break;
                    case 2:
                        button2.Text = "O";
                        break;
                    case 3:
                        button3.Text = "O";
                        break;
                    case 4:
                        button4.Text = "O";
                        break;
                    case 5:
                        button5.Text = "O";
                        break;
                    case 6:
                        button6.Text = "O";
                        break;
                    case 7:
                        button7.Text = "O";
                        break;
                    case 8:
                        button8.Text = "O";
                        break;
                    case 9:
                        button9.Text = "O";
                        break;
                }
            else
            {
                switch (b)
                {
                    case 1:
                        button1.Text = "-";
                        break;
                    case 2:
                        button2.Text = "-";
                        break;
                    case 3:
                        button3.Text = "-";
                        break;
                    case 4:
                        button4.Text = "-";
                        break;
                    case 5:
                        button5.Text = "-";
                        break;
                    case 6:
                        button6.Text = "-";
                        break;
                    case 7:
                        button7.Text = "-";
                        break;
                    case 8:
                        button8.Text = "-";
                        break;
                    case 9:
                        button9.Text = "-";
                        break;
                }
                n = 0;
            }
            return n;
        }
        void ver()
        {
            if ((b1 == b2) && (b2 == b3) && ((b3==1)||(b3==2)))
                MessageBox.Show("Nice!");
            if ((b1 == b4) && (b4 == b7) && ((b7 == 1) || (b7 == 2)))
                MessageBox.Show("Nice!");
            if ((b1 == b5) && (b5 == b9) && ((b9 == 1) || (b9 == 2)))
                MessageBox.Show("Nice!");
            if ((b2 == b5) && (b5 == b8) && ((b8 == 1) || (b8 == 2)))
                MessageBox.Show("Nice!");
            if ((b4 == b5) && (b5 == b6) && ((b6 == 1) || (b6 == 2)))
                MessageBox.Show("Nice!");
            if ((b7 == b8) && (b8 == b9) && ((b9 == 1) || (b9 == 2)))
                MessageBox.Show("Nice!");
            if ((b3 == b5) && (b5 == b7) && ((b7 == 1) || (b7 == 2)))
                MessageBox.Show("Nice!");
            if ((b3 == b6) && (b6 == b9) && ((b9 == 1) || (b9 == 2)))
                MessageBox.Show("Nice!");

        }
        
        private void button1_Click(object sender, EventArgs e)
        {
            b1 = cv(b1, 1);
            ver();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            b2 = cv(b2, 2);
            ver();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            b3 = cv(b3, 3);
            ver();
        }

        private void button4_Click(object sender, EventArgs e)
        {
            b4 = cv(b4, 4);
            ver();
        }

        private void button5_Click(object sender, EventArgs e)
        {
            b5 = cv(b5, 5);
            ver();
        }

        private void button6_Click(object sender, EventArgs e)
        {
            b6 = cv(b6, 6);
            ver();
        }

        private void button7_Click(object sender, EventArgs e)
        {
            b7 = cv(b7, 7);
            ver();
        }

        private void button8_Click(object sender, EventArgs e)
        {
            b8 = cv(b8, 8);
            ver();
        }

        private void button9_Click(object sender, EventArgs e)
        {
            b9 = cv(b9, 9);
            ver();
        }
    }
}
