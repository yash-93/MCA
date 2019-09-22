using System;

namespace Practicals
{
	public class MyClass
	{
		static void Main(string[] args){
			string val, rev = "";
			int num, len, sum = 0, index = 1;
			Console.Write("Enter an Integer : ");
			val = Console.ReadLine();
			len = val.Length;
			num = Convert.ToInt32(val);
		
		//USING FOR LOOP
			Console.WriteLine ("USING FOR LOOP");
			Console.WriteLine ("Table of " + val + " is");

			for(int i = 1 ; i <= 10 ; i++ ){
				Console.WriteLine(num + " * " + i + " = " + num*i);
			}

			for(int i = 0 ; i < len ; i++ ){
				int value = num;
				int rr = value % 10;
				sum += rr;
				rev += rr;
				value = value / 10;
			}

			Console.WriteLine("Reversed number is : " + rev);
			Console.WriteLine("Sum of digits of number is : " + sum);
		
		//USING DO WHILE LOOP
			Console.WriteLine ("\nUSING DO WHILE LOOP\n");
			Console.WriteLine ("Table of " + val + " is");
			do{
				Console.WriteLine(num + " * " + index + " = " + num*index);
				++index;
			}while(index<=10);
			index = sum = 0;
			rev = @"";
			do{
				int rr = num % 10;
				sum += rr;
				rev += rr;
				num = num / 10;
				++index;
			}while(index < len);
			Console.WriteLine("Reversed number is : " + rev);
			Console.WriteLine("Sum of digits of number is : " + sum);

		}
	}
}

