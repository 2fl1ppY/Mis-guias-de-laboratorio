#include <iostream>
using namespace std;

int main() {
    int lado, area;
    string tamano;
    cout << "Ingrese el lado del cuadrado: ";
    cin >> lado;
    area = lado * lado;
    cout << "El area del cuadrado es: " << area << endl;
    if (area < 100) {
        tamano = "cuadrado pequeño";
    }
    else {
        tamano = "cuadrado grande";
    }
    cout << "Es un " << tamano << endl;
    return 0;
}