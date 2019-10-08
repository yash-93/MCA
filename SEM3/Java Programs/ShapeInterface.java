import java.lang.Math;
import java.util.Scanner;

interface Shape{
	void area(int a, int b, int c);
	void perimeter(int a, int b, int c);
}

interface Triangle extends Shape{
	int a = 0, b = 0, c = 0;
}

class Rectangle implements Shape{
	public void area(int a, int b, int c){}
	public void perimeter(int a, int b, int c){}
}

class Scalene implements Triangle{
	public void perimeter(int a, int b, int c){
		if (a != b & b != c) {
			System.out.println("Perimeter of Scalene Triangle is : " + (a+b+c));
		}else{
			System.out.println("Not an Scalene Triangle");
		}
	}

	public void area(int a, int b, int c){
		if (a != b & b != c) {
			int s = (a+b+c)/2;
			System.out.println("Area of Scalene Triangle is : " + Math.sqrt(s*(s-a)*(s-b)*(s-c)));
		}else{
			System.out.println("Not a Scalene Triangle");
		}
	}
}

class Isosceles implements Triangle{
	public void perimeter(int a, int b, int c){
		if ((a == b & b != c) || (a == c & c != b) || (b == c & c != a)) {
			System.out.println("Perimeter of Isosceles Triangle is : " + (a+b+c));
		}else{
			System.out.println("Not an Isosceles Triangle");
		}
	}

	public void area(int a, int b, int c){
		if ((a == b & b != c)) {
			System.out.println("Area of Isosceles Triangle is : " + ((c/2)*Math.sqrt(a*a - ((c*c)/4))) );
		}if ((a == c & c != b)) {
			System.out.println("Area of Isosceles Triangle is : " + ((b/2)*Math.sqrt(a*a - ((b*b)/4))) );
		}if ((b == c & c != a)) {
			System.out.println("Area of Isosceles Triangle is : " + ((a/2)*Math.sqrt(b*b - ((a*a)/4))) );
		}else{
			System.out.println("Not an Isosceles Triangle");
		}
	}
}

class Equilateral implements Triangle{
	public void perimeter(int a, int b, int c){
		if (a == b & b == c) {
			System.out.println("Perimeter of Equilateral Triangle is : " + (3*a));
		}else{
			System.out.println("Not an Equilateral Triangle");
		}
	}

	public void area(int a, int b, int c){
		if (a == b & b == c) {
			System.out.println("Area of Equilateral Triangle is : " + (Math.sqrt(3)/4)*a*a);
		}else{
			System.out.println("Not an Equilateral Triangle");
		}
	}
}

class ShapeInterface{
	public static void main(String[] args) {
		Equilateral eq = new Equilateral();
		eq.perimeter(3, 3, 3);
		eq.area(3, 3, 3);

		Isosceles i = new Isosceles();
		i.perimeter(3, 3, 3);
		i.area(3, 3, 3);

		Scalene sc = new Scalene();
		sc.perimeter(3, 6, 1);
		sc.area(3, 3, 3);
	}
}