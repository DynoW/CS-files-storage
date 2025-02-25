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
    public partial class Form4 : Form
    {
        public Form4()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int n, nrd=0;
            n = int.Parse(textBox7.Text);
            for(int i = 1; i <= n; i++)
            {
                if (n % i == 0)
                    nrd++;
            }
            textBox1.Text = nrd.ToString();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            int n, s = 0;
            n = int.Parse(textBox7.Text);
            for (int i = 1; i <= n; i++)
            {
                if (n % i == 0 && i % 2 == 0)
                    s = s + 0;
            }
            textBox2.Text = s.ToString();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            int n, nrd = 0;
            n = int.Parse(textBox7.Text);
            for (int i = 1; i <= n; i++)
            {
                if (n % i == 0)
                    nrd++;
            }
            if (nrd == 2)
                textBox1.Text = "Da";
            else
                textBox3.Text = "Nu";
        }
    }
}
