import java.util.Scanner;
import java.lang.String;

public class StudentNames{
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		System.out.print("Enter the number of students : ");
		int num = input.nextInt();
		int pos = 0;
		String[] names = new String[num];
		String[] sorted = new String[num];
		System.out.print("Enter the name of students : ");
		for (int i = 0; i < num; i++) {
			names[i] = input.nextLine();
		}

		//for (int i = 1; i <= num; i++) {
			//for (int j = i+1; j <= num; i++) {
				//if( (int)names[i].charAt(pos) >  (int)names[j].charAt(pos) ) {

				//}
			//}
		//}
		System.out.print(names[1].charAt(pos));
	}
}