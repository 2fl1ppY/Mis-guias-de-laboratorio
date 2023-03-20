#include <iostream>
using namespace std;

int main() {
    int cantidad_de_dinero, billetes_de_100 = 0, billetes_de_50 = 0, billetes_de_10 = 0, monedas_de_1 = 0;
    
    cout << "Ingrese la cantidad de dinero en soles: ";
    cin >> cantidad_de_dinero;
    
    billetes_de_100 = cantidad_de_dinero / 100;
    int resto = cantidad_de_dinero % 100;
    billetes_de_50 = resto / 50;
    resto = resto % 50;
    billetes_de_10 = resto / 10;
    resto = resto % 10;
    monedas_de_1 = resto;
    
    cout << "Billetes de 100: " << billetes_de_100 << endl;
    cout << "Billetes de 50: " << billetes_de_50 << endl;
    cout << "Billetes de 10: " << billetes_de_10 << endl;
    cout << "Monedas de 1 sol: " << monedas_de_1 << endl;
    
    return 0;
}