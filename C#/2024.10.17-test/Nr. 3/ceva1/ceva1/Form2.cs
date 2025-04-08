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
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int a, b, c=0, ct=0;
            a = int.Parse(textBox1.Text);
            b = int.Parse(textBox2.Text);
            while (a != 0)
            {
                c += a % 10;
                a /= 10;
            }
            while (b != 0)
            {
                c += b % 10;
                b /= 10;
            }
            for(int i = 1; i <= c; i++)
            {
                if (c % i == 0)
                {
                    ct++;
                }
            }
            if (ct == 2)
                textBox3.Text = "cod bun";
            else
                textBox3.Text = "cod greșit";
        }
    }
}
