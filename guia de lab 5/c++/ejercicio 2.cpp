#include <iostream>

using namespace std;

int main() 
{
    int valorI, valorF, suma = 0, cantidad = 0;

    cout << "Ingrese el valor inicial: ";
    cin >> valorI;
    cout << "Ingrese el valor final: ";
    cin >> valorF;

    for (int i = valorI; i <= valorF; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            suma += i;
            cantidad++;
        }
    }

    cout << "La suma de los números divisibles por 3 y 5 es: " << suma << endl;
    cout << "La cantidad de números divisibles por 3 y 5 es: " << cantidad << endl;

    return 0;
}
