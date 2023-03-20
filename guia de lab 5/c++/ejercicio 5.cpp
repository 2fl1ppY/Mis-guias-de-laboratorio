#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double base, exponente, resultado;
    
    cout << "Ingrese la base: ";
    cin >> base;
    
    cout << "Ingrese el exponente: ";
    cin >> exponente;
    
    if (exponente == 0) {
        resultado = 1;
    } else if (exponente > 0) {
        resultado = 1;
        for (int i = 1; i <= exponente; i++) {
            resultado *= base;
        }
    } else {
        resultado = 1;
        exponente *= -1;
        for (int i = 1; i <= exponente; i++) {
            resultado *= base;
        }
        resultado = 1 / resultado;
    }
    
    cout << "El resultado es: " << resultado << endl;
    
    return 0;
}
