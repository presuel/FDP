#include <iostream>
#include <cmath>	// Para sqrt
using namespace std;

int main(){
	//
	cout << "Calcular la hipotenusa de un triangulo rectangulo.\n";
	double ladoA, ladoB, ladoC;
	cout << "Lado A: ";
	cin >> ladoA;
	cout << "Lado B: ";
	cin >> ladoB;
	ladoC= sqrt( ladoA*ladoA+ladoB*ladoB );
	cout << "Hipotenusa= " << ladoC;   
	//
    return 0;
}