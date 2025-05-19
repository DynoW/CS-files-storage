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
        private void pictureBox1_Click(object sender, EventArgs e)
        {
            f = new Form3();
            f.ShowDialog();
        }

        private void pictureBox2_Click(object sender, EventArgs e)
        {
            global.banane++;
        }

        private void pictureBox3_Click(object sender, EventArgs e)
        {
            global.biscuiti++;
        }

        private void pictureBox4_Click(object sender, EventArgs e)
        {
            global.mere++;
        }

        private void pictureBox5_Click(object sender, EventArgs e)
        {
            global.paste++;
        }
    }
}
