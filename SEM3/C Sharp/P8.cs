using System;

namespace Practicals
{
	class EnglishDistance{
		private float feet;
		private float inches, i;

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
	}

	class MetricDistance{
		private float m;
		private float cm;

		public float M{
			get{ 
				return m;
			}
			set{ 
				m = (value * 0.3048f) + cm;
			}
		}

		public float CM{
			get{ 
				return cm;
			}
			set{ 
				cm = (value * 2.54f)/100;
			}
		}
	}

	public class MyClass
	{
		static void Main(string[] args){
			float feet, inches;
			Console.Write("Enter feet : ");
			feet = Convert.ToInt32(Console.ReadLine ());
			Console.Write("Enter inches : ");
			inches = Convert.ToInt32(Console.ReadLine ());

			EnglishDistance ed = new EnglishDistance();
			ed.Inches = inches;
			ed.Feet = feet;

			MetricDistance md = new MetricDistance();
			md.CM = ed.Inches;
			md.M = ed.Feet;

			Console.Write ("English Distance : ");
			Console.WriteLine (ed.Feet + "'" + ed.Inches + "\"");
			Console.Write ("Metric Distance : ");
			Console.WriteLine (md.M + "m");

		}
	}
}

