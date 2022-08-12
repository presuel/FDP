import java.util.Scanner;

public class hipotenusa {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		//
		System.out.println("Calcular la hipotenusa de un triangulo rectangulo.\n");
		double Matriz[][] = new double[10][3];
		int i = 0;
		System.out.println("Se podra repetir hasta 10 veces el proceso.\n");
		int respuesta;
		do {
			if (i < 10) {
				System.out.println("Lado A: ");
				Matriz[i][0] = scan.nextDouble();
				if (Matriz[i][0] > 0) {
					System.out.println("Lado B:");
					Matriz[i][1] = scan.nextDouble();
					if (Matriz[i][1] > 0) {
						Matriz[i][2] = Math.sqrt(Matriz[i][0] * Matriz[i][0] + Matriz[i][1] * Matriz[i][1]);
						System.out.println("Hipotenusa= " + Matriz[i][2]);
					} else {
						System.out.println("Error - Lado B incorrecto.\n");
						Matriz[i][2] = -1;
					}
				} else {
					System.out.println("Error - Lado A incorrecto.\n");
					Matriz[i][2] = -1;
				}
				i++;
				System.out.println("Para finalizar oprima 0, para continuar 1.\n");
				respuesta = scan.nextInt();
			} else {
				respuesta = 0;
			}
		} while (respuesta != 0);
		System.out.println("Ejercicios realizados\n");
		for (int ii = 0; ii < i; ii++) {
			if (Matriz[ii][2] > -1) {
				System.out.println("Triangulo de " + Matriz[ii][0] + "x" + Matriz[ii][1] +
						" tiene hipotenusa de " + Matriz[ii][2]);
			} else {
				System.out.println("Ejercicio con datos incorrectos.");
			}
		}
		scan.close();
	}
}