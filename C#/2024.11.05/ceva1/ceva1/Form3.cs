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
        
        private void label2_Click(object sender, EventArgs e)
        {
            String text = "";
            if (global.banane != 0)
                text += "banane x " + global.banane + " - " + 5 * global.banane + " lei\n";
            if (global.mere != 0)
                text += "mere x " + global.mere + " - " + 4 * global.mere + " lei\n";
            if (global.biscuiti != 0)
                text += "biscuiti x " + global.biscuiti + " - " + 8 * global.biscuiti + " lei\n";
            if (global.paste != 0)
                text += "paste x " + global.paste + " - " + 12 * global.paste + " lei\n";
            text += "Suma = " + (5 * global.banane + 4 * global.mere + 8 * global.biscuiti + 12 * global.paste);
            label2.Text = text;
        }
        Form4 f;
        private void button1_Click(object sender, EventArgs e)
        {
            f = new Form4();
            f.ShowDialog();
        }
    }
}
