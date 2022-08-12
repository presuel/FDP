#include <iostream>
using namespace std;

int main(){
	//
	double Matriz[3][3]= {0};
	//double ladoA, ladoB, perimetro;
	int respuesta;
    cout << "Calcular el perimetro de un rectangulo.\n";
	cout << "Cuantas veces desea repetir el codigo? ";
	cin >> respuesta;
	for( int i=0; i<respuesta; i++){
		cout << "Lado A: ";
		// cin >> ladoA; 
		// Matriz[i][0]= ladoA;
		cin >> Matriz[i][0];
		if( Matriz[i][0] > 0){
			cout << "Lado B: ";
			// cin >> ladoB;
			// Matriz[i][1]= ladoB;
			cin >> Matriz[i][1];
			if( Matriz[i][1] > 0 ){
				// perimetro= Matriz[i][0]*2+Matriz[i][1]*2;
				// Matriz[i][2]= perimetro;
				Matriz[i][2]= Matriz[i][0]*2+Matriz[i][1]*2;
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
		cout << "Rectangulo de " << Matriz[i][0] << "x" <<
			 Matriz[i][1] << "= " << Matriz[i][2] << "\n";
	}
	//
	return 0;
}