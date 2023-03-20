#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    int a, b;
    double resultado;
    cout << "Digite los 2 valores enteros: ";
    cin >> a >> b;

    if (pow(a, 2) - pow(b, 2) < 0) {
        resultado = 2*a + b;
    }
    else {
        if (pow(a, 2) - pow(b, 2) == 0) {
            resultado = pow(a, 2) - 2*b;
        }
        else {
            resultado = a + b;
        }
    }

    cout << "El valor de la funcion f(x) es de: " << resultado << endl;

    return 0;
}