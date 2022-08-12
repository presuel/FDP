#include <iostream>
#include <cmath>	// Para sqrt
using namespace std;

int main(){
	//
	cout << "Calcular la hipotenusa de un triangulo rectangulo.\n";
	double ladoA, ladoB, ladoC;
	cout << "Lado A: ";
	cin >> ladoA;
	if( ladoA > 0 ){
		cout << "Lado B: ";
		cin >> ladoB;
		if( ladoB > 0 ){
			ladoC= sqrt( ladoA*ladoA+ladoB*ladoB );
			cout << "Hipotenusa= " << ladoC;   
		}else{
			cout << "Error en el lado B." << endl;
		}
	}else{
		cout << "Error en el lado A." << endl;
	}
	//
    return 0;
}