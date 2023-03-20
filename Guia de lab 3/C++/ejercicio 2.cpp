#include <iostream>

using namespace std;

int main() {
    float ventas, comision;

    cout << "Ingrese el número de ventas: ";
    cin >> ventas;

    if (ventas >= 0 && ventas <= 200) {
        comision = 0;
    } else if (ventas >= 200 && ventas <= 1000) {
        comision = ventas * 0.10;
    } else if (ventas >= 1000 && ventas <= 2000) {
        comision = ventas * 0.15;
    } else if (ventas >= 2000 && ventas <= 3000) {
        comision = ventas * 0.20;
    } else if (ventas >= 3000 && ventas <= 4000) {
        comision = ventas * 0.25;
    } else {
        comision = ventas * 0.30;
    }

    cout << "La comision total es de: " << comision << " nuevos soles" << endl;

    return 0;
}