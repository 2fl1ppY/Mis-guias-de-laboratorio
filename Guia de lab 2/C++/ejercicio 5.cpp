#include <iostream>
using namespace std;

int main() {
    double consumo, descuento, importe_a_pagar, impuesto;
    cout << "Ingresa el valor de consumo: ";
    cin >> consumo;
    if (consumo <= 100) {
        descuento = consumo * 0.1;
    }
    else {
        descuento = consumo * 0.2;
    }
    impuesto = (consumo - descuento) * 0.19;
    importe_a_pagar = consumo - descuento + impuesto;
    cout << "Valor descuento: " << descuento << endl;
    cout << "Valor de importe a pagar: " << importe_a_pagar << endl;
    cout << "Valor de impuesto: " << impuesto << endl;
    return 0;
}