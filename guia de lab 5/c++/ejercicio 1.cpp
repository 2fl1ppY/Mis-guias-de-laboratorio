#include<iostream>
using namespace std;

int main() {
	int contador;
	float denominador;
	int n;
	float numerador;
	cout << "Ingrese la cantidad de terminos a generar:" << endl;
	cin >> n;
	numerador = 2;
	denominador = 5;
	cout << numerador << "/" << denominador << endl;
	contador = 2;
	while (contador<=n) {
		numerador = numerador+3;
		denominador = denominador+4;
		cout << numerador << "/" << denominador << endl;
		contador = contador+1;
	}
	return 0;
}

