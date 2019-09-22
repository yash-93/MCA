using System;

namespace Practicals
{
	public class MyClass
	{
		static void Main(string[] args){
			bool flag = false;
			Console.Write("Enter first integer : ");
			string val1 = Console.ReadLine();
			Console.Write("Enter second integer : ");
			string val2 = Console.ReadLine();
			int num1 = Convert.ToInt32(val1);
			int num2 = Convert.ToInt32(val2);
			Console.Write("Prime numbers between " + val1 + " and " + val2 + ":");

			for (int i = num1; i <= num2; i++) {
				for (int j = 2; j <= i/2; j++) {
					if (i % j == 0) {
						flag = false;
						break;
					} else {
						flag = true;
					}
					}
				if(flag == true){
					Console.Write (" " + i);
				}
			}
			Console.Write ("\n");
		}
	}
}

