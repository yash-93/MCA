using System;

namespace Practicals
{
	public class MyClass
	{
		public int fact(int a){
			if (a == 0) {
				return 1;
			} else {
				return a*fact(a-1);
			}
		}

		static void Main(string[] args){
			int fact = 1, i = 1;
			Console.Write ("Enter an integer integer : ");
			string val = Console.ReadLine ();
			int num = Convert.ToInt32 (val);

			//WITHOUT RECURSION
			Console.WriteLine ("WITHOUT RECURSION");
			if (num == 0) {
				Console.WriteLine ("Factorial is : 1");
			} else if (num > 0) {
				while (i <= num) {
					fact *= i;
					i++;
				}
				Console.WriteLine ("Factorial is : " + fact);
			}

			//WITH RECURSION
			Console.WriteLine ("\nWITH RECURSION");
			MyClass o = new MyClass ();
			fact = o.fact (num);
			Console.WriteLine ("Factorial is : " + fact);
		}
	}
}

