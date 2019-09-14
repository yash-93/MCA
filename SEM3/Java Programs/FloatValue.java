import java.util.Scanner;

class FloatValue{
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		System.out.print("Enter the float value : ");
		float val = input.nextFloat();
		int sint = (int)val;
		System.out.println("Smallest integer : " + sint);
		System.out.println("Given value is : " + val);
		System.out.println("Largest integer : " + (sint + 1));
	}
}