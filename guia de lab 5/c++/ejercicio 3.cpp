#include<iostream>

using namespace std;

int main() {
	int a;
	int b;
	float i;
	int mcd;
	int mcm;
	cout << "Ingrese el primer número:" << endl;
	cin >> a;
	cout << "Ingrese el segundo número:" << endl;
	cin >> b;
	for (i=1;i<=a;i ++) {
		if (a*i==0 && b*i==0) {
			mcd = i;
		}
	}
	mcm = (a*b);
	
	cout << "El MCM de " << a << " y " << b << " es: " << mcm << endl;
	cout << "EL MCD de " << a << "y" << b << "es:" << mcd << endl;
	cout << "EL Resultados de " << a*b << " es igual a" << mcd*mcm << endl;
	
	return 0;
}

