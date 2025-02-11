using System;
using System.Windows.Forms;

namespace Mega
{
    public partial class Form3 : Form
    {
        public Form3()
        {
            InitializeComponent();
            InitializeForm();
        }

        private void InitializeForm()
        {
            this.StartPosition = FormStartPosition.CenterScreen;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            this.DialogResult = DialogResult.OK;
            this.Close();
        }
    }
}