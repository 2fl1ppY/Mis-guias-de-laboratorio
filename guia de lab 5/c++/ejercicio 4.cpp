#include<iostream>

using namespace std;

int main() {
	int i;
	int n;
	int sCuadrados = 0, sCubos = 0;
	cout << "Ingrese un numero :" << endl;
	cin >> n;
	sCuadrados = 0;
	sCubos = 0;
	for (i=1;i<=n;i++) {
		sCuadrados+=i*i;
		sCubos+=i*i*i;
	}
	cout << "La suma de los cuadrados de los primeros " << n << " numeros naturales es: " << sCuadrados << endl;
	cout << "La suma de los cubos de los primeros " << n << " numeros naturales es: " << sCubos << endl;
	return 0;
}

