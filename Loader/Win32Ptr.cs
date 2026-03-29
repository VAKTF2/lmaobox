using System;

namespace JLibrary.Win32
{
	public static class Win32Ptr
	{
		public static IntPtr Create(long value)
		{
			return new IntPtr((int)value);
		}

		public static bool IsNull(this IntPtr ptr)
		{
			return ptr == IntPtr.Zero;
		}

		public static bool Compare(this IntPtr ptr, long value)
		{
			return ptr.ToInt64() == value;
		}
	}
}
