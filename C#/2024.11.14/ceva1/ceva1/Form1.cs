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
            Class1.x = new Random().Next(1,2);

        }
        private void button1_Click(object sender, EventArgs e)
        {
            if (int.Parse(textBox1.Text) != Class1.x)
            {
                Class1.f = new Form2();
                Class1.f.ShowDialog();
            }
            else
            {
                Class1.g = new Form3();
                Class1.g.ShowDialog();
            }
        }
    }
}
