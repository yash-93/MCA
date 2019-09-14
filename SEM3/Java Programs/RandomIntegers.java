import java.util.Random;
import java.util.Scanner;

class RandomIntegers{
	public static void main(String[] args) {
		Random rand = new Random();
		Scanner input = new Scanner(System.in);
		System.out.print("Enter min value of the range : ");
		int min = input.nextInt();
		System.out.print("Enter max value of the range : ");
		int max = input.nextInt();

		for(int i = 0; i < 5; i++){
			int num = rand.nextInt((max - min) + 1) + min;
			System.out.print(num + " ");
		}
	}
}