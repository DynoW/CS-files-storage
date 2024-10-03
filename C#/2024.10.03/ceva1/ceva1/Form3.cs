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
    public partial class Form3 : Form
    {
        public Form3()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int n, s=0;
            n = int.Parse(textBox7.Text);
            while (n != 0)
            {
                s += n % 10;
                n /= 10;
            }
            textBox1.Text = s.ToString();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            int n, ogl = 0;
            n = int.Parse(textBox7.Text);
            while (n != 0)
            {
                ogl = ogl*10 + n%10;
                n /= 10;
            }
            textBox2.Text = ogl.ToString();
        }

        private void button4_Click(object sender, EventArgs e)
        {
            int nra, nrb = 0, p = 1;
            nra = int.Parse(textBox7.Text);
            while (nra != 0)
            {
                if (nra % 2 == 0)
                {
                    nrb = nrb + nra % 10 * p;
                    p *= 10;
                }
                nra /= 10;
            }
            textBox3.Text = nrb.ToString();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            int n, max=0;
            n = int.Parse(textBox7.Text);
            while (n != 0)
            {
                if (max < n % 10)
                    max = n % 10;
                n /= 10;
            }
            textBox4.Text = max.ToString();
        }

        private void button6_Click(object sender, EventArgs e)
        {
            int n, min = 0;
            n = int.Parse(textBox7.Text);
            while (n != 0)
            {
                if (min < n % 10)
                    min = n % 10;
                n /= 10;
            }
            textBox5.Text = min.ToString();
        }

        private void button5_Click(object sender, EventArgs e)
        {
            int nra = int.Parse(textBox7.Text);
            int nrb = 0;
            int p = 1;
            while (nra != 0)
            {
                nrb = nrb + p * (nra % 2);
                nra = nra / 2;
                p = p * 10;
            }
            textBox6.Text = nrb.ToString();
        }
    }
}
