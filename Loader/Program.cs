using System;
using System.Windows.Forms;

namespace LMAOBOXLOADER
{
	internal static class Program
	{6
		[STAThread]
		private static void Main()
		{
			Application.EnableVisualStyles();
			Application.SetCompatibleTextRenderingDefault(false);
			Application.Run(new FormA());
		}
	}
}
