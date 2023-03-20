#include <iostream>
using namespace std;

int main() {
    double saldoant, montotran, saldoactual;
    char tipomovil;
    cout << "Ingrese su saldo anterior: ";
    cin >> saldoant;
    cout << "Ingrese el tipo de movimiento retiro (R) o deposito (D): ";
    cin >> tipomovil;
    cout << "Ingrese el monto de transaccion: ";
    cin >> montotran;
    if (tipomovil == 'R' || tipomovil == 'r') {
        saldoactual = saldoant - montotran;
    }
    else if (tipomovil == 'D' || tipomovil == 'd') {
        saldoactual = saldoant + montotran;
    }
    else {
        saldoactual = 0;
        cout << "No existe este movimiento" << endl;
    }
    cout << "Su saldo actual es de: " << saldoactual << endl;
    return 0;
}