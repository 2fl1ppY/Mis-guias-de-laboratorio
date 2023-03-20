#include <iostream>
using namespace std;

int main() {
    float sueld, aumento, sueldFin;
    cout << "Digite el sueldo del empleado: ";
    cin >> sueld;

    if (sueld >= 0 && sueld <= 800) {
        aumento = sueld * 0.20;
    } else if (sueld >= 801 && sueld <= 1000) {
        aumento = sueld * 0.10;
    } else if (sueld >= 1001 && sueld <= 1500) {
        aumento = sueld * 0.05;
    } else {
        aumento = 0;
    }

    sueldFin = sueld + aumento;

    cout << "El sueldo final del empleado con el aumento del: " << aumento
         << " es de: " << sueldFin << " nuevos soles" << endl;

    return 0;
}