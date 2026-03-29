using System;
using System.ComponentModel;
using System.Diagnostics;
using System.Drawing;
using System.Windows.Forms;
using InjectionLibrary;
using LMAOBOXLOADER.Properties;

namespace LMAOBOXLOADER
{
	public class FormA : Form
	{
		public FormA()
		{
			this.InitializeComponent();
		}

		private void Loader()
		{
			this.timer1.Enabled = false;
			IntPtr zero = IntPtr.Zero;
			Process[] processesByName = Process.GetProcessesByName("tf_win64");
			if (processesByName.Length == 0 || processesByName[0].MainWindowHandle == IntPtr.Zero)
			{
				this.timer1.Enabled = true;
				return;
			}
			try
			{
				this.injector.Inject(processesByName[0].Id);
			}
			catch (Exception ex)
			{
				MessageBox.Show(ex.Message);
			}
			base.Close();
		}

		private void timer1_Tick(object sender, EventArgs e)
		{
			this.Loader();
		}

		private void FormA_Load(object sender, EventArgs e)
		{
		}

		private void FormA_Shown(object sender, EventArgs e)
		{
			this.timer1.Enabled = true;
		}

		protected override void Dispose(bool disposing)
		{
			if (disposing && this.components != null)
			{
				this.components.Dispose();
			}
			base.Dispose(disposing);
		}

		private void InitializeComponent()
		{
			this.components = new Container();
			this.timer1 = new Timer(this.components);
			this.box = new Label();
			this.pictureBox1 = new PictureBox();
			((ISupportInitialize)this.pictureBox1).BeginInit();
			base.SuspendLayout();
			this.timer1.Interval = 1500;
			this.timer1.Tick += this.timer1_Tick;
			this.box.AutoSize = true;
			this.box.BackColor = Color.Black;
			this.box.Font = new Font("Calibri", 15.75f, FontStyle.Regular, GraphicsUnit.Point, 238);
			this.box.ForeColor = SystemColors.ControlLightLight;
			this.box.Location = new Point(12, 135);
			this.box.Name = "box";
			this.box.Size = new Size(213, 26);
			this.box.TabIndex = 0;
			this.box.Text = "LMAOBOX FREE 1.4.15 (x64)";
			this.pictureBox1.Image = Resources._13105755983971;
			this.pictureBox1.Location = new Point(0, -1);
			this.pictureBox1.Name = "pictureBox1";
			this.pictureBox1.Size = new Size(336, 175);
			this.pictureBox1.TabIndex = 1;
			this.pictureBox1.TabStop = false;
			base.AutoScaleDimensions = new SizeF(6f, 13f);
			base.AutoScaleMode = AutoScaleMode.Font;
			base.ClientSize = new Size(328, 170);
			base.Controls.Add(this.box);
			base.Controls.Add(this.pictureBox1);
			base.FormBorderStyle = FormBorderStyle.FixedToolWindow;
			base.Name = "FormA";
			base.ShowIcon = false;
			base.ShowInTaskbar = false;
			base.StartPosition = FormStartPosition.CenterScreen;
			this.Text = "Waiting for the game...";
			base.TopMost = true;
			base.Load += this.FormA_Load;
			base.Shown += this.FormA_Shown;
			((ISupportInitialize)this.pictureBox1).EndInit();
			base.ResumeLayout(false);
			base.PerformLayout();
		}

		private InjectionMethod injector = new InjectionMethod();

		private IContainer components;

		private Timer timer1;

		private PictureBox pictureBox1;

		private Label box;
	}
}
