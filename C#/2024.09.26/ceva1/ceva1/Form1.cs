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
            int n, cmax=0;
            n = int.Parse(textBox1.Text);
            while(n!=0)
            {
                if (cmax < n % 10)
                    cmax = n % 10;
                n /= 10;
            }
            textBox2.Text = cmax.ToString();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            int n, cmin = 9;
            n = int.Parse(textBox1.Text);
            while (n != 0)
            {
                if (cmin > n % 10)
                    cmin = n % 10;
                n /= 10;
            }
            textBox3.Text = cmin.ToString();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            textBox4.Text = (int.Parse(textBox2.Text)+int.Parse(textBox3.Text)).ToString();
        }
    }
}
