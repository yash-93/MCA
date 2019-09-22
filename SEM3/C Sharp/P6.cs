using System;

namespace Practicals
{
	public class MyClass
	{
		public static int fib(int a){
			if (a <= 1) {
				return a;
			} else {
				return fib(a - 1)+fib(a - 2);
			}
		}

		static void Main(string[] args){
			Console.Write ("Enter an integer integer : ");
			int num = Convert.ToInt32 (Console.ReadLine ());

			//WITH RECURSION
			Console.WriteLine ("\nWITH RECURSION");
			for(int i = 0; i < num; i++){
				Console.WriteLine (" " + fib(i));
			}
		}
	}
}

