﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace PLED_GUI
{
    public partial class engraving : Form
    {
        public engraving()
        {
            InitializeComponent();
            this.Show();
            System.Diagnostics.Process.Start("C:/PLED/src/SerialToPC.exe");
        }
    }
}
