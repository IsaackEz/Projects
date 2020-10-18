import java.util.Scanner;
public class TestRectangulo{
	public static void main (String args[]){
		Scanner scan = new Scanner(System.in);
		
		System.out.println("Ingresa la base del rectangulo: ");
		double tempBase = scan.nextDouble();
		System.out.println("Ingresa la altura del rectangulo: ");
		double tempAltura = scan.nextDouble();
		
		Rectangulo r;
		r = new Rectangulo();
		
		r.setAltura(tempAltura);
		r.setBase(tempBase);
		
		System.out.println("Base del rectangulo r: " + r.getBase());
		System.out.println("Altura del rectangulo r: " + r.getAltura()	);
		System.out.println("Perimetro del rectangulo r: " + r.perimetro());
		System.out.println("Area del rectangulo r: " + r.area());
		r.setAltura (-4.3);
		System.out.println("Area del rectangulo r: " + r.area());
		System.out.println("Perimetro del rectangulo r: " + r.perimetro());
	}
}