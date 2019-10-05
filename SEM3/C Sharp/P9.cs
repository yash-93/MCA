using System;

namespace Practicals
{
	class DistSumDiff{
		private float feet, inches, sumF, sumI, diffF, diffI, i;

		public DistSumDiff(){
			feet = 0;
			inches = 0;
		}

		public float Inches{
			get{ 
				return inches;
			}
			set{ 
				i = value;
				if(i >= 12){
					inches = i % 12;
				} else {
					inches = i;
				}
			}
		}

		public float Feet{
			get{ 
				return feet;
			}
			set{ 
				if(i >= 12){
					feet = value + (i/12);
				} else {
					feet = value;
				}
			}
		}

		public void add(DistSumDiff d){
			sumF = this.feet + d.feet;
			sumI = this.inches + d.inches;
			if(sumI >= 12){
				sumF += (sumI/12);
				sumI = sumI % 12;
			}
			Console.WriteLine("Addition => " + (int)sumF + "'" + sumI + "\"");
		}

		public void sub(DistSumDiff d){
			diffF = this.feet - d.feet;
			diffI = this.inches - d.inches;
			Console.WriteLine("Subtraction => " + (int)diffF + "'" + diffI + "\"");
		}
	}

	public class MyClass
	{
		static void Main(string[] args){
			DistSumDiff d1 = new DistSumDiff();
			DistSumDiff d2 = new DistSumDiff();
			Console.WriteLine("1st Distance ");
			Console.Write("\tEnter feet : ");
			d1.Feet = (float)Convert.ToInt32(Console.ReadLine());
			Console.Write("\tEnter inches : ");
			d1.Inches = (float)Convert.ToInt32(Console.ReadLine());

			Console.WriteLine("2nd Distance ");
			Console.Write("\tEnter feet : ");
			d2.Feet = (float)Convert.ToInt32(Console.ReadLine());
			Console.Write("\tEnter inches : ");
			d2.Inches = (float)Convert.ToInt32(Console.ReadLine());

			d1.add(d2);
			d1.sub(d2);
		}
	}
}