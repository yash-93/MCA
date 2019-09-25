class SumEqualProduct{
	public static void main(String[] args) {
		int nums = 100, numl = 1000, sum = 0, mul = 1;

		while (nums < 1000){
			for (int n = nums ; n!=0 ; n/=10) {
				sum += n%10;
				mul *= n%10;
			}
			if(sum == mul){
				System.out.println("Smallest 3 digit number with equal sum and product is : " + nums);
				break;
			} else {
				sum = 0;
				mul = 1;
				++nums;
			}
		}

		while (numl > 99){
			for (int n = numl ; n!=0 ; n/=10) {
				sum += n%10;
				mul *= n%10;
			}
			if(sum == mul){
				System.out.println("Biggest 3 digit number with equal sum and product is : " + numl);
				break;
			} else {
				sum = 0;
				mul = 1;
				--numl;
			}
		}
	}
}