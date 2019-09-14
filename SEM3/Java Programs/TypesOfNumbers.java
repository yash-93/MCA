import java.util.Scanner;

class TypesOfNumbers{
	public static void main(String[] args) {
		int num, val = 1, sum = 0;
		Scanner input = new Scanner(System.in);
		System.out.print("Enter positive integer : ");
		num = input.nextInt();
		
		while(val <= num/2) {
			if (num%val==0) {
			sum += val;
			}
			++val;
		}

		if (sum == num) {
			System.out.println(num + " is a Perfect Number");
		} else if (sum > num) {
			System.out.println(num + " is a Abundant Number");
		} else {
			System.out.println(num + " is a Deficient Number");
		}
	}
}