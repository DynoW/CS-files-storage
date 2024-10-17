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
        Form f, g, h;
        private void button1_Click(object sender, EventArgs e)
        {
            f = new Form2();
            f.ShowDialog();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            g = new Form3();
            g.ShowDialog();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            h = new Form4();
            h.ShowDialog();
        }
    }
}
