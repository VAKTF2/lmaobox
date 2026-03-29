using System;
using System.Runtime.InteropServices;

namespace JLibrary.Win32
{
	public static class WinAPI
	{
		[DllImport("kernel32.dll", SetLastError = true)]
		public static extern IntPtr OpenProcess(uint dwDesiredAccess, bool bInheritHandle, int dwProcessId);

		[DllImport("kernel32.dll", SetLastError = true)]
		public static extern IntPtr OpenThread(uint dwDesiredAccess, bool bInheritHandle, int dwThreadId);

		[DllImport("kernel32.dll", SetLastError = true)]
		[return: MarshalAs(UnmanagedType.Bool)]
		public static extern bool CloseHandle(IntPtr handle);

		[DllImport("kernel32.dll", SetLastError = true)]
		public static extern IntPtr VirtualAllocEx(IntPtr hProcess, IntPtr lpAddress, uint dwSize, int flAllocationType, int flProtect);

		[DllImport("kernel32.dll", SetLastError = true)]
		[return: MarshalAs(UnmanagedType.Bool)]
		public static extern bool VirtualFreeEx(IntPtr hProcess, IntPtr lpAddress, int dwSize, int dwFreeType);

		[DllImport("kernel32.dll", SetLastError = true)]
		[return: MarshalAs(UnmanagedType.Bool)]
		public static extern bool WriteProcessMemory(IntPtr hProcess, IntPtr lpAddress, byte[] lpBuffer, int dwSize, out uint lpNumberOfBytesRead);

		[DllImport("kernel32.dll", SetLastError = true)]
		public static extern IntPtr CreateRemoteThread(IntPtr hProcess, int lpThreadAttributes, int dwStackSize, IntPtr lpStartAddress, IntPtr lpParameter, int dwCreationFlags, int lpThreadId);

		[DllImport("kernel32.dll", SetLastError = true)]
		public static extern IntPtr GetModuleHandleA(string lpModuleName);

		[DllImport("kernel32.dll", CharSet = CharSet.Ansi, SetLastError = true)]
		public static extern IntPtr GetProcAddress(IntPtr hModule, string lpProcName);

		[DllImport("kernel32.dll", SetLastError = true)]
		public static extern uint WaitForSingleObject(IntPtr hObject, int dwTimeout);

		[DllImport("kernel32.dll", SetLastError = true)]
		[return: MarshalAs(UnmanagedType.Bool)]
		public static extern bool GetExitCodeThread(IntPtr hThread, out uint lpExitCode);

		public static uint RunThread(IntPtr hProcess, IntPtr lpStartAddress, IntPtr lpParam, int timeout = 1000)
		{
			uint maxValue = uint.MaxValue;
			IntPtr intPtr = WinAPI.CreateRemoteThread(hProcess, 0, 0, lpStartAddress, lpParam, 0, 0);
			if (intPtr != IntPtr.Zero && (ulong)WinAPI.WaitForSingleObject(intPtr, timeout) == 0UL)
			{
				WinAPI.GetExitCodeThread(intPtr, out maxValue);
			}
			return maxValue;
		}

		public static IntPtr CreateRemotePointer(IntPtr hProcess, byte[] pData, int flProtect)
		{
			IntPtr intPtr = IntPtr.Zero;
			if (pData != null && hProcess != IntPtr.Zero)
			{
				intPtr = WinAPI.VirtualAllocEx(hProcess, IntPtr.Zero, (uint)pData.Length, 12288, flProtect);
				uint num = 0U;
				if ((intPtr == IntPtr.Zero || !WinAPI.WriteProcessMemory(hProcess, intPtr, pData, pData.Length, out num) || (ulong)num != (ulong)((long)pData.Length)) && intPtr != IntPtr.Zero)
				{
					WinAPI.VirtualFreeEx(hProcess, intPtr, 0, 32768);
					intPtr = IntPtr.Zero;
				}
			}
			return intPtr;
		}
	}
}
