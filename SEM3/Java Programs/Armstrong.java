import java.util.Scanner;
import java.lang.String;
import java.lang.Math;
import java.lang.Integer;

class Armstrong{
	public static void main(String[] args) {
		int num, len, sum = 0;
		Scanner input = new Scanner(System.in);
		System.out.print("Enter a positive integer : ");
		num = input.nextInt();
		len = String.valueOf(num).length();
		
		for (int n = num ; n!=0 ; n/=10) {
			//System.out.println(n%10);
			sum += (int)Math.pow((n%10),len);
		}

		if (num == sum) {
			System.out.println("It is an Armstrong number.");
		} else {
			System.out.println("It is not an Armstrong number.");
		}
	}
}