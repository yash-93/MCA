using System;

namespace Practicals
{
	class DateTime{
		bool flag = false;
		int dd, mm, yy, hr, min;

		public int Day{
			get{
				return dd;
			}
			set{
				dd = value;
			}
		}

		public int Month{
			get{
				return mm;
			}
			set{
				mm = value;
			}
		}

		public int Year{
			get{
				return yy;
			}
			set{
				yy = value;
			}
		}

		public int Hour{
			get{
				return hr;
			}
			set{
				hr = value;
			}
		}

		public int Min{
			get{
				return min;
			}
			set{
				min = value;
			}
		}

		public bool validDate(){
			if (mm == 2 & dd <= 28 & dd >= 1) {
				flag = true;
			} else if(mm<8 & mm>2 & mm%2==0 & dd <= 30 & dd >= 1) {
				flag = true;
			} else if(mm>8 & mm<=12 & mm%2==1 & dd <= 30 & dd >= 1){
				flag = true;
			} else if(mm<8 & mm>2 & mm%2==1 & dd <= 31 & dd >= 1) {
				flag = true;
			} else if(mm>8 & mm<=12 & mm%2==0 & dd <= 31 & dd >= 1){
				flag = true;
			} 

			return flag;
		}

		public bool validTime(){
			flag = false;
			if(hr<=24 & hr>=0 & min>=0 & min<=60){
				flag = true;
			}

			return flag;
		}
		
	}

	public class MyClass
	{
		static void Main(string[] args){

			string date, time;
			string[] resdate, restime;
			char[] ch = { '-' }, ch1 = { ':' };
			Console.Write ("Enter a date (dd-mm-yyyy) : ");
			date = Console.ReadLine ();
			resdate = date.Split (ch, StringSplitOptions.RemoveEmptyEntries);

			Console.Write ("Enter time (hr:mins) : ");
			time = Console.ReadLine ();
			restime = time.Split (ch1, StringSplitOptions.RemoveEmptyEntries);

			DateTime dt = new DateTime ();
			dt.Day = Convert.ToInt32(resdate[0]);
			dt.Month = Convert.ToInt32(resdate[1]);
			dt.Year = Convert.ToInt32(resdate[2]);
			dt.Hour = Convert.ToInt32(restime[0]);
			dt.Min = Convert.ToInt32(restime[1]);

			if (dt.validDate ()) {
				Console.WriteLine ("Valid Date");
			} else {
				Console.WriteLine ("Invalid Date");
			}

			if (dt.validTime ()) {
				Console.WriteLine ("Valid Time");
			} else {
				Console.WriteLine ("Invalid Time");
			}

		}
	}
}