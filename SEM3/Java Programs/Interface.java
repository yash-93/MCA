interface Myinterface{
	final int a = 10, b = 20;
	void sum(int a, int b);
}

class Interface implements Myinterface{

	public void sum(int a, int b){
		System.out.println("Sum is : " + (a+b));
	}

	public static void main(String[] args) {
		Interface i = new Interface();
		i.sum(a,b);
	}
}