import java.util.Scanner;	// Para leer desde teclado

// Ojo= el archivo debe llamarse igual que la clase.
public class perimetro {
	public static void main (String[] args){
		Scanner scan= new Scanner(System.in);
		//
		System.out.println("Calcular el perimetro de un rectangulo.\n");
		double ladoA, ladoB, perimetro;
		System.out.println("Lado A: ");
		ladoA= scan.nextDouble();
		System.out.println("Lado B: ");
		ladoB= scan.nextDouble();
		perimetro= 2*ladoA+2*ladoB;
		System.out.println("Perimetro= " + perimetro);
		//
	}
}