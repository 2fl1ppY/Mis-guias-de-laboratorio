#include <iostream>

using namespace std;

int main() {
    int lado, area;
    cout << "Ingrese el lado del cuadrado: ";
    cin >> lado;
    area = lado * lado;

    if (area < 100) {
        cout << "El cuadrado tiene un area de: " << area << " por ende es un cuadrado pequeño" << endl;
    } else {
        cout << "El area del cuadrado es de : " << area << " por ende el cuadrado es grande" << endl;
    }
    return 0;
}