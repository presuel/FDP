#include <iostream>
using namespace std;

int main(){
	//
	double ladoA, ladoB, perimetro;
	int respuesta;
    cout << "Calcular el perimetro de un rectangulo.\n";
	cout << "Cuantas veces desea repetir el codigo? ";
	cin >> respuesta;
	for( int i=0; i<respuesta; i++){
		cout << "Lado A: ";
		cin >> ladoA;
		if( ladoA > 0){
			cout << "Lado B: ";
			cin >> ladoB;
			if( ladoB > 0 ){
				perimetro= 2*ladoA+2*ladoB;
				cout << "Perimetro= " << perimetro << "\n\n";
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