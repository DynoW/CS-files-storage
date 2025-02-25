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
    public partial class Form3 : Form
    {
        public Form3()
        {
            InitializeComponent();
        }
        int x = 0;
        private void timer1_Tick(object sender, EventArgs e)
        {
            x++;
            if (x > 3)
            {
                Class1.x = 0;
                Class1.g.Close();
            }
        }
    }
}
