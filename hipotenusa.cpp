#include <iostream>
#include <cmath>	// Para sqrt
using namespace std;

int main(){
	//
	cout << "Calcular la hipotenusa de un triangulo rectangulo.\n";
	double ladoA, ladoB, ladoC;
	int respuesta;
	cout << "Cuantas veces desea repetir el codigo? ";
	cin >> respuesta;
	for( int i=0; i<respuesta; i++){
		cout << "\nLado A: ";
		cin >> ladoA;
		if( ladoA > 0 ){
			cout << "Lado B: ";
			cin >> ladoB;
			if( ladoB > 0 ){
				ladoC= sqrt( ladoA*ladoA+ladoB*ladoB );
				cout << "Hipotenusa= " << ladoC << "\n\n"; 
			}else{
				cout << "Error en el lado B.\n\n";
			}
		}else{
			cout << "Error en el lado A.\n\n";
		}
	}
	//
    return 0;
}