using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ceva4
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int n1, n2, ogl=0;
            n1 = int.Parse(textBox1.Text);
            n2 = int.Parse(textBox2.Text);
            if (n1 > n2)
            {
                while (n1 != 0)
                {
                    ogl = ogl * 10 + n1 % 10;
                    n1 /= 10;
                }
            }
            else
            {
                while (n2 != 0)
                {
                    ogl = ogl * 10 + n2 % 10;
                    n2 /= 10;
                }
            }
            textBox3.Text = ogl.ToString();
        }
    }
}
