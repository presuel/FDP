import java.util.Scanner;	// Para leer desde teclado

public class perimetro {
	public static void main (String[] args){
		Scanner scan= new Scanner(System.in);
		//
		for(int i=0; i<3; i++){
			System.out.println("Calcular el perimetro de un rectangulo.\n");
			double ladoA, ladoB, perimetro;
			System.out.println("Lado A: ");
			ladoA= scan.nextDouble();
			if( ladoA > 0 ){
				System.out.println("Lado B: ");
				ladoB= scan.nextDouble();
				if( ladoB > 0 ){
					perimetro= 2*ladoA+2*ladoB;
					System.out.println("Perimetro= " + perimetro);
				}else{
					System.out.println("Error en lado B.\n");
				}
			}else{
				System.out.println("Error en lado A.\n");
			}
		}
		//
	}
}