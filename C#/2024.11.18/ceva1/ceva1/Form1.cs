using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;

namespace ceva1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        StreamReader f = new StreamReader(@"E:\C#\2024.11.18\ceva1\ceva1\intrare.in");
        private void button1_Click(object sender, EventArgs e)
        {
            int x, ct, i, j, aux, min=1000, max=0;
            int sprim = 0;
            int []v = new int[100];
            int n = int.Parse(f.ReadLine());
            for(i=0; i < n; i++)
            {
                x = int.Parse(f.ReadLine());
                v[i] = x;
                ct = 0;
                for(j=1;j<=x;j++)
                {
                    if(x%j==0)
                    {
                        ct++;
                    }
                }
                if(ct==2)
                {
                    sprim++;
                }
                if (max < v[x])
                    max = v[x];
                if (min > v[x])
                    max = v[x];

            }
            textBox3.Text = max.ToString();
            textBox4.Text = min.ToString();
            for (i = 0; i < n; i++)
            {
                for (j = i + 1; j < n; j++)
                {
                    if (v[j] < v[i])
                    {
                        aux = v[i];
                        v[j] = aux;
                    }
                }
            }
            String vec = "";
            for (i = 0; i < n; i++)
                vec = vec + v[i] + " ";
            textBox1.Text = sprim.ToString();
            textBox2.Text = vec;
        }
    }
}
