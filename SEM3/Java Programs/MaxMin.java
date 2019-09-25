import java.util.Scanner;

class MaxMin{
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		System.out.print("Enter number of integers : ");
		int len = input.nextInt();
		int[] arr = new int[len];
		System.out.print("Enter " + len + " integers : ");
		
		for(int i = 0; i < len; i++)
		{
			arr[i] = input.nextInt();
		}

		int max = arr[0], min = arr[0];

		for(int i = 1; i < len; i++){
			max = arr[i] > max ? arr[i] : max;
			min = arr[i] < min ? arr[i] : min;
		}

		System.out.println("Max is " + max);
		System.out.println("Min is " + min);	
	}
}