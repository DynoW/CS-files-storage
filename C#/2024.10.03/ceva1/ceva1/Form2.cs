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
        Form3 f;
        Form4 g;
        Form5 h;
        private void button1_Click(object sender, EventArgs e)
        {
            f = new Form3();
            f.ShowDialog();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            g = new Form4();
            g.ShowDialog();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            h = new Form5();
            h.ShowDialog();
        }
    }
}
