import java.util.Scanner;
import java.lang.String;



class StringOperations{

	static String revStr(String str){
			String rev = "";
			for(int i = str.length() - 1; i >= 0; i--)
			{
				rev = rev + str.charAt(i);
			}
			return rev;
		}

	public static void main(String[] args) {
		boolean flag = true;
		char ch;
		Scanner input = new Scanner(System.in);

		System.out.print("Enter a string : ");
		String str = input.nextLine();

		char[] arrChar = new char[str.length()];

		System.out.print("1. Reverse\n2. Palindrome\n3. Compare\n4. Substring\n5. Concatenate\n");
		System.out.println("6. Convert string to char array\n7. Sort string chars\n8. Char frequency");

		System.out.print("Enter your choice : ");
		ch = input.next().charAt(0);

		switch(ch){
			case '1':	System.out.println(revStr(str));
						break;
					
			case '2':	String strN = revStr(str);
						for (int i = 0; i < str.length(); i++) {
							if(str.charAt(i) != strN.charAt(i)){
								flag = false;
								break;
							}
						}
						if (flag == false) {
							System.out.println("Not Palindrome");
						}else{
							System.out.println("Palindrome");
						}
						break;

			case '3':	input.nextLine();
						flag = true;
						System.out.print("Enter another string : ");
						String str2 = input.nextLine();
						if(str.length()!=str2.length()){
							System.out.println("Strings are not equal");
						}else{
							for (int i = 0; i < str.length(); i++) {
								if (str.charAt(i) != str2.charAt(i)) {
									flag = false;
									break;
								}
							}
							if(flag)
								System.out.println("Strings are equal");
							else
								System.out.println("Strings are not equal");
						}
						System.out.println();
						break;

			case '4':	input.nextLine();
						int j = 0;
						System.out.print("Enter sub-string : ");
						str2 = input.nextLine();
						for (int i = 0; i <= (str.length()-str2.length()); i++) {
							while(j < str2.length()){
								//if(str2[j] == str[i]){

								//}
								//else{
									
								//}
							}
						}
						System.out.println();
						break;

			case '5':	input.nextLine();
						System.out.print("Enter another string : ");
						str2 = input.nextLine();
						String str3 = str + str2;
						System.out.println("\nConcatenated string is :" + str3);
						break;

			case '6':	for(int i = 0; i < str.length(); i++){
							arrChar[i] = str.charAt(i);
						}
						System.out.print("Array of chars of string : ");
						for(int i = 0; i < str.length(); i++){
							System.out.print(arrChar[i] + " ");
						}
						System.out.println();
						break;

			case '7':	for(int i = 0; i < str.length(); i++){
							arrChar[i] = str.charAt(i);
						}

						for (int i = 0; i < str.length(); i++) {
							for(j = i + 1; j < str.length(); j++){
								if((int)arrChar[i] > (int)arrChar[j]){
									char temp = arrChar[i];
									arrChar[i] = arrChar[j];
									arrChar[j] = temp;
								}
							}
						}
						System.out.print("Sorted array of chars of string: ");
						for(int i = 0; i < str.length(); i++){
							System.out.print(arrChar[i] + " ");
						}
						System.out.println();
						break;

			case '8':	int[] freq = new int[256];

						for (int i=0; i< str.length(); i++){
            				freq[(int)str.charAt(i)]++;
						}

						int max = freq[0], maxSec = freq[0];
						for(int i = 0; i < 256; i++){
							if (freq[i] > max) {
								maxSec = max;
								max = freq[i];
				 
							} else if (freq[i] > maxSec) {
								maxSec = freq[i];
				 
							}
						}
						System.out.print("\nCharacters havng second largest frequency " + maxSec);
						System.out.print(" are : ");
						for (int i = 0; i < 256; i++) {
							if (freq[i] == maxSec) {
								System.out.print((char)i + " ");
							}
						}
						System.out.println();
						break;
		}
	}
}