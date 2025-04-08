namespace ceva1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        int ct1 = 0;
        int ct2 = 0;
        int ct3 = 0;
        int ct4 = 0;
        int ct5 = 0;
        int ct6 = 0;
        int ct7 = 0;
        int ct8 = 0;
        int ct9 = 0;

        void verif()
        {
            if (ct1 == ct2 && ct2 == ct3 && ct1 != 0)
                MessageBox.Show("Ai castigat");
            if (ct4 == ct5 && ct5 == ct6 && ct4 != 0)
                MessageBox.Show("Ai castigat");
            if (ct7 == ct8 && ct8 == ct9 && ct7 != 0)
                MessageBox.Show("Ai castigat");
            if (ct1 == ct4 && ct4 == ct7 && ct1 != 0)
                MessageBox.Show("Ai castigat");
            if (ct2 == ct5 && ct5 == ct8 && ct2 != 0)
                MessageBox.Show("Ai castigat");
            if (ct3 == ct6 && ct6 == ct9 && ct3 != 0)
                MessageBox.Show("Ai castigat");
            if (ct1 == ct5 && ct5 == ct9 && ct1 != 0)
                MessageBox.Show("Ai castigat");
            if (ct3 == ct5 && ct5 == ct7 && ct3 != 0)
                MessageBox.Show("Ai castigat");
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (ct1 % 2 == 0)
            {
                button1.Text = "x";
                ct1++;
            }
            else
            {
                button1.Text = "0";
                ct1++;
            }
            verif();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (ct2 % 2 == 0)
            {
                button2.Text = "x";
                ct2++;
            }
            else
            {
                button2.Text = "0";
                ct2++;
            }
            verif();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            if (ct3 % 2 == 0)
            {
                button3.Text = "x";
                ct3++;
            }
            else
            {
                button3.Text = "0";
                ct3++;
            }
            verif();
        }

        private void button4_Click(object sender, EventArgs e)
        {
            if (ct4 % 2 == 0)
            {
                button4.Text = "x";
                ct4++;
            }
            else
            {
                button4.Text = "0";
                ct4++;
            }
            verif();
        }

        private void button5_Click(object sender, EventArgs e)
        {
            if (ct5 % 2 == 0)
            {
                button5.Text = "x";
                ct5++;
            }
            else
            {
                button5.Text = "0";
                ct5++;
            }
            verif();
        }

        private void button6_Click(object sender, EventArgs e)
        {
            if (ct6 % 2 == 0)
            {
                button6.Text = "x";
                ct6++;
            }
            else
            {
                button6.Text = "0";
                ct6++;
            }
            verif();
        }

        private void button7_Click(object sender, EventArgs e)
        {
            if (ct7 % 2 == 0)
            {
                button7.Text = "x";
                ct7++;
            }
            else
            {
                button7.Text = "0";
                ct7++;
            }
            verif();
        }

        private void button8_Click(object sender, EventArgs e)
        {
            if (ct8 % 2 == 0)
            {
                button8.Text = "x";
                ct8++;
            }
            else
            {
                button8.Text = "0";
                ct8++;
            }
            verif();
        }

        private void button9_Click(object sender, EventArgs e)
        {
            if (ct9 % 2 == 0)
            {
                button9.Text = "x";
                ct9++;
            }
            else
            {
                button9.Text = "0";
                ct9++;
            }
            verif();
        }
    }
}
