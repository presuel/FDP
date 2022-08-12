import java.util.Scanner;

public class hipotenusa {
	public static void main(String[] args){
		Scanner scan= new Scanner(System.in);
		System.out.println("Calcular la hipotenusa de un triangulo rectangulo.\n");
		double ladoA, ladoB, ladoC;
		System.out.println("Lado A:");
		ladoA= scan.nextDouble();
		if( ladoA > 0 ){
			System.out.println("Lado B:");
			ladoB= scan.nextDouble();
			if( ladoB > 0 ){
				ladoC= Math.sqrt( ladoA*ladoA+ladoB*ladoB);
				System.out.println("Hipotenusa= " + ladoC);
			}else{
				System.out.println("Error - Lado B incorrecto.\n");
			}
		}else{
			System.out.println("Error - lado A incorrecto.\n");
		}
	}
}