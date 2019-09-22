using System;

namespace Practicals
{
	public class MyClass
	{
		static void Main(string[] args){
			string fname, sname = "Bachhas";
			Console.Write("Enter your first name : ");
			fname = Console.ReadLine();
			Console.WriteLine("Your second name is : " + sname);
			Console.Write("Your full name is : " + fname + " " + sname);
			Console.ReadKey();
		}
	}
}

