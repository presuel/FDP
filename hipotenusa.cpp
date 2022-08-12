#include <iostream>
#include <cmath>	// Para sqrt
using namespace std;

int main(){
	//
	cout << "Calcular la hipotenusa de un triangulo rectangulo.\n";
	double Matriz[10][3]= {0};
	int i= 0;
	cout << "Se podra repetir hasta 10 veces el proceso.\n";
	int respuesta;
	do{
		if( i < 10){
			cout << "\nLado A: ";
			cin >> Matriz[i][0];
			if( Matriz[i][0] > 0 ){
				cout << "Lado B: ";
				cin >> Matriz[i][1];
				if( Matriz[i][1] > 0 ){
					Matriz[i][2]= sqrt( Matriz[i][0]*Matriz[i][0]+Matriz[i][1]*Matriz[i][1] );
					cout << "Hipotenusa= " << Matriz[i][2] << "\n\n"; 
				}else{
					cout << "Error en el lado B.\n\n";
				}
				i++;
				cout << "Para finalizar oprima 0, para continuar 1: ";
				cin >> respuesta;
			}else{
				cout << "Error en el lado A.\n\n";
			}
		} else {
			respuesta = 0;
		}
	}while(respuesta != 0);
	cout << "Ejercicios realizados\n";
	for(int ii=0; ii<i; ii++){
		cout << "Triangulo de " << Matriz[ii][0] << "x" <<
		Matriz[ii][1] << " tiene hipotenusa de " << 
		Matriz[ii][2] << "\n";
	}
	//
    return 0;
}