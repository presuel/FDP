#include <iostream>
using namespace std;

double calcPerimetro(double A, double B){
	return A*2+B*2;
}

int main(){
	//
	double Matriz[3][3]= {0};
	int respuesta;
    cout << "Calcular el perimetro de un rectangulo.\n";
	cout << "Cuantas veces desea repetir el codigo? ";
	cin >> respuesta;
	for( int i=0; i<respuesta; i++){
		cout << "Lado A: ";
		cin >> Matriz[i][0];
		if( Matriz[i][0] > 0){
			cout << "Lado B: ";
			cin >> Matriz[i][1];
			if( Matriz[i][1] > 0 ){
				Matriz[i][2]= calcPerimetro( Matriz[i][0], Matriz[i][1]);
				cout << "Perimetro= " << Matriz[i][2] << "\n\n";
			}else{
				cout << "Error en el lado B.\n\n";
				Matriz[i][2]= -1;
			}
		}else{
			cout << "Error en el lado A.\n\n";
			Matriz[i][2]= -1;
		}
	}	
	// Salida
	cout << "Ejercicios realizados\n";
	for(int i=0; i<respuesta; i++){
		if( Matriz[i][2] > -1 ){
			cout << "Rectangulo de " << Matriz[i][0] << "x" <<
				 Matriz[i][1] << "= " << Matriz[i][2] << "\n";
		}else{
			cout << "Ejercicio con datos incorrectos.\n";
		}
	}
	//
	return 0;
}