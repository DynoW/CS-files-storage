﻿using System;
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

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            int n, s=0;
            n = int.Parse(textBox1.Text);
            while(n!=0)
            {
                s = s + n % 10;
                n /= 10;
            }
            textBox2.Text = s.ToString();
        }
    }
}
