#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, n, A;
    cout << "Ingrese el lado del primer cuadrado: ";
    cin >> a;
    cout << "Ingrese el número de cuadrados anidados que se forman: ";
    cin >> n;
    A = (4.0/3.0) * a * a * (1 - pow(1.0/4.0, n));
    cout << "La suma de las áreas de todos los cuadrados es: " << A << endl;
    return 0;
}