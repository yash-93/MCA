import java.util.Scanner;
import java.lang.String;
import java.lang.Math;

public class StudentNames{
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		System.out.print("Enter the number of students : ");
    	int num = Integer.parseInt(input.nextLine());
		int pos = 0;
		String[] names = new String[num];
		String[] sorted = new String[num];
		System.out.print("Enter the name of students : ");
		for (int i = 0; i < num; i++) {
			names[i] = input.nextLine();
		}

		for (int i = 0; i < num-1; i++) {
			for (int j = i+1; j < names.length; j++) {
				if(names[i].compareTo(names[j])>0) {
	               String temp = names[i];
	               names[i] = names[j];
	               names[j] = temp;
	            }
			}
		}
		System.out.println("SORTED STRING ARRAY")

		for (int i = 0; i < num; i++) {
			System.out.println(names[i]);
		}
	}
}