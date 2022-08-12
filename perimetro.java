import java.util.Scanner; // Para leer desde teclado

public class perimetro {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		//
		double Matriz[][] = new double[3][3];
		for (int i = 0; i < 3; i++) {
			System.out.println("Calcular el perimetro de un rectangulo.\n");
			// double ladoA, ladoB, perimetro;
			System.out.println("Lado A: ");
			Matriz[i][0] = scan.nextDouble();
			if (Matriz[i][0] > 0) {
				System.out.println("Lado B: ");
				Matriz[i][1] = scan.nextDouble();
				if (Matriz[i][1] > 0) {
					Matriz[i][2] = 2 * Matriz[i][0] + 2 * Matriz[i][1];
					System.out.println("Perimetro= " + Matriz[i][2]);
				} else {
					System.out.println("Error en lado B.\n");
				}
			} else {
				System.out.println("Error en lado A.\n");
			}
		}
		System.out.println("Ejercicios realizados\n");
		for (int i = 0; i < 3; i++) {
			System.out.println("Rectangulo de " + Matriz[i][0] +
					"x" + Matriz[i][1] + "= " + Matriz[i][2] + "\n");
		}
		//
		scan.close();
	}
}