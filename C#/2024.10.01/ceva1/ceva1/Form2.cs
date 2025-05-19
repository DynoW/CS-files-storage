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
        int t = 0;
        private void timer1_Tick(object sender, EventArgs e)
        {
            if (t == 10)
                t = 0;
            pictureBox1.Image = imageList1.Images[t];
            t++;
        }
    }
}
