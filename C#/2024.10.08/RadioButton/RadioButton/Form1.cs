using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace RadioButton
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int ct = 0;
            if(radioButton3.Checked==true)
            { ct++; }
            if (radioButton7.Checked == true)
                ct++;
            textBox1.Text = ct.ToString();
        }
    }
}
