#include <iostream>
using namespace std;

int main(){
	//
	double ladoA, ladoB, perimetro;
    cout << "Calcular el perimetro de un rectangulo.\n";
	cout << "Lado A: ";
	cin >> ladoA;
	if( ladoA > 0){
		cout << "Lado B: ";
		cin >> ladoB;
		if( ladoB > 0 ){
			perimetro= 2*ladoA+2*ladoB;
			cout << "Perimetro= " << perimetro;
		}else{
			cout << "Error en el lado B.\n";
		}
	}else{
		cout << "Error en el lado A.\n";
	}
	//
	return 0;
}