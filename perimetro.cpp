#include <iostream>
using namespace std;

int main(){
	//
	double ladoA, ladoB, perimetro;
    cout << "Calcular el perimetro de un rectangulo.\n";
	cout << "Lado A: ";
	cin >> ladoA;
	cout << "Lado B: ";
	cin >> ladoB;
	perimetro= 2*ladoA+2*ladoB;
	cout << "Perimetro= " << perimetro;
	//
	return 0;
}