import java.util.Scanner;

public class hipotenusa {
	public static void main(String[] args){
		Scanner scan= new Scanner(System.in);
		System.out.println("Calcular la hipotenusa de un triangulo rectangulo.\n");
		double ladoA, ladoB, ladoC;
		System.out.println("Lado A:");
		ladoA= scan.nextDouble();
		System.out.println("Lado B:");
		ladoB= scan.nextDouble();
		ladoC= Math.sqrt( ladoA*ladoA+ladoB*ladoB);
		System.out.println("Hipotenusa= " + ladoC);
	}
}