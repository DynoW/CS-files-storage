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
        Point p;
        private void button1_KeyDown(object sender, KeyEventArgs e)
        {
            p.X = button1.Location.X;
            p.Y = button1.Location.Y;

            if (e.KeyCode == Keys.Right)
                p.X += 10;
            if (e.KeyCode == Keys.Down)
                p.Y += 10;
            if (e.KeyCode == Keys.Left)
                p.X -= 10;
            if (e.KeyCode == Keys.Up)
                p.Y -= 10;
            button1.Location = p;
        }
    }
}
