import java.util.Scanner;

abstract class Shape{
	public int x, y;
	Shape(){
		x = 0;
		y = 0;
	}

	public abstract void getCoord();
	public abstract void howCoord();
	public void showCoord(){
		System.out.println("Coordinates are : (" + x + "," + y + ")");
	}
}

class Rect extends Shape{
	Scanner input = new Scanner(System.in);
	public void getCoord(){
		System.out.print("Enter the x-coordinate : ");
		x = input.nextInt();
		System.out.print("Enter the y-coordinate : ");
		y = input.nextInt();
	}

	public void howCoord(){
	}

	public void showCoord(){
		super.showCoord();
	}

}

class ShapeMain{
	public static void main(String[] args) {
		Shape s = new Rect();
		s.getCoord();
		s.showCoord();
	}
}