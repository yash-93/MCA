using System;

namespace Practicals
{
	public class MyClass
	{
		static void Main(string[] args){
			int a, b, ch;
			char choice = 'y';
			Console.WriteLine("\n**********MENU**********");
			Console.WriteLine("1. Sum\n2. Difference\n3. Product\n4. Divsion\n5. Mod\n6. Increment a\n7. Decrement b\n8. Exit");
			Console.WriteLine("Enter values of a and b : ");
			a = Convert.ToInt32(Console.ReadLine());
			b = Convert.ToInt32(Console.ReadLine());
			do{
				Console.Write ("Enter your choice : ");
				ch = Convert.ToInt32(Console.ReadLine());
				switch(ch){
				case 1:
					Console.WriteLine(a + b);
					break;
				case 2:
					Console.WriteLine(a - b);
					break;
				case 3:
					Console.WriteLine(a * b);
					break;
				case 4:
					Console.WriteLine(a / b);
					break;
				case 5:
					Console.WriteLine(a % b);
					break;
				case 6:
					Console.WriteLine(++a);
					break;
				case 7:
					Console.WriteLine(--b);
					break;
				case 8:
					choice = 'n';
					break;
				}
		}while(choice == 'y');
			Console.ReadKey();
		}
	}
}

