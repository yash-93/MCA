class Pattern{
	public static void main(String[] args) {
		int i=1, f=65, l=71;
		while(i <= 7){

			for (int j=f; j<=l; j++) {
				System.out.print((char)j);
			}
			for (int j=l; j>=f; j--) {
				System.out.print((char)j);
			}
			System.out.println();
			i++;
			l--;
		}
	}
}