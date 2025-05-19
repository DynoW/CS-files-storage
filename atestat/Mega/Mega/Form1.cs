namespace Mega
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        Form2 f = new Form2();

        private void button1_Click(object sender, EventArgs e)
        {
            this.Hide();
            f.Show();
        }
    }
}
