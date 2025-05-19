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
            if (1 == global.rasp_bun)
            {
                global.f.Close();
                
            }
            else
            {
                button1.Text = "x";
            }
        }
        private void button2_Click(object sender, EventArgs e)
        {
            if (2 == global.rasp_bun)
            {
                global.f.Close();

            }
            else
            {
                button2.Text = "x";
            }
        }
        private void button3_Click(object sender, EventArgs e)
        {
            if (3 == global.rasp_bun)
            {
                global.f.Close();

            }
            else
            {
                button3.Text = "x";
            }
        }
        private void button4_Click(object sender, EventArgs e)
        {
            if (4 == global.rasp_bun)
            {
                global.f.Close();

            }
            else
            {
                button4.Text = "x";
            }
        }

        private void Form2_Load(object sender, EventArgs e)
        {
            label1.Text = global.text;
            button1.Text = global.rasp[1].ToString();
            button2.Text = global.rasp[2].ToString();
            button3.Text = global.rasp[3].ToString();
            button4.Text = global.rasp[4].ToString();
        }
    }
}
