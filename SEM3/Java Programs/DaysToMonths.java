import java.util.Scanner;

class DaysToMonths{
	public static void main(String[] args) {
		int days, months = 0;
		Scanner input = new Scanner(System.in);
		System.out.print("Enter Number of days : ");
		days = input.nextInt();
		if ((days / 30) == 0) {
			System.out.println(months + " months and " + days + " days");
		} else {
			months = days / 30;
			days = days % 30;
			if (days == 1) {
				System.out.println(months + " months and " + days + " day");	
			} else {
				System.out.println(months + " months and " + days + " days");
			}
		}
	}
}