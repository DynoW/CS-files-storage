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
    public partial class Form5 : Form
    {
        public Form5()
        {
            InitializeComponent();
        }

        private void label5_Click(object sender, EventArgs e)
        {

        }
        int n = 1;
        private void button1_Click(object sender, EventArgs e)
        {
            void da()
            {
                label1.Visible = false;
                label2.Visible = false;
                label3.Visible = false;
                label4.Visible = false;
                label5.Visible = false;
                label6.Visible = false;
                label7.Visible = false;
            }
            switch (n) {
                case 1:
                    da();
                    label1.Visible = true;
                    break;
                case 2:
                    da();
                    label2.Visible = true;
                    break;
                case 3:
                    da();
                    label3.Visible = true;
                    break;
                case 4:
                    da();
                    label4.Visible = true;
                    break;
                case 5:
                    da();
                    label5.Visible = true;
                    break;
                case 6:
                    da();
                    label6.Visible = true;
                    break;
                case 7:
                    da();
                    label7.Visible = true;
                    n=0;
                    break;
            }
            n++;
        }
    }
}
