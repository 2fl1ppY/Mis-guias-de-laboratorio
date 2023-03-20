#include <iostream>

using namespace std;

int main() {
    float sueldoNet, sueldoBrut, descuento, quincena, montoFinal;
    
    cout << "Ingrese el sueldo bruto: ";
    cin >> sueldoBrut;
    
    descuento = sueldoBrut * 0.12;
    sueldoNet = sueldoBrut - descuento;
    quincena = (sueldoNet * 40) / 100;
    montoFinal = sueldoNet - quincena;
    
    cout << "El descuento es: " << descuento << endl;
    cout << "El sueldo neto es: " << sueldoNet << endl;
    cout << "El monto a cobrar en la quincena es: " << quincena << endl;
    cout << "El monto a cobrar a fin de mes es: " << montoFinal << endl;
    
    return 0;
}