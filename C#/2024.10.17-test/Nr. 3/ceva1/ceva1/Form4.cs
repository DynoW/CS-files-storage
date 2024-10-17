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
    public partial class Form4 : Form
    {
        public Form4()
        {
            InitializeComponent();
        }
        int ct = 0;
        private void button1_Click(object sender, EventArgs e)
        {
            if (radioButton1.Checked)
                ct++;
            if (radioButton5.Checked)
                ct++;
            if (radioButton8.Checked)
                ct++;
            if (radioButton10.Checked)
                ct++;
            if (radioButton15.Checked)
                ct++;
            if (radioButton17.Checked)
                ct++;
            if (radioButton21.Checked)
                ct++;
            if (radioButton22.Checked)
                ct++;
            if (radioButton27.Checked)
                ct++;
            if (ct > 7)
                label11.Text = "Felicitari!";
            else if (ct >= 5)
                label11.Text = "Se poate mai mult!";
            else if (ct < 5)
                label11.Text = "Recapituleaza materia!";
            label11.Visible = true;
        }
    }
}
