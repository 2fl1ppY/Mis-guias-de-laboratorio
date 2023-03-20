#include <iostream>
using namespace std;

int main() {
    int dia, mes, anio;
    cout << "Ingrese el dia: ";
    cin >> dia;
    cout << "Ingrese el mes: ";
    cin >> mes;
    cout << "Ingrese el anio: ";
    cin >> anio;
    
    switch (mes) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
            if (dia == 31) {
                cout << "El dia siguiente a la fecha es: 1/" << mes+1 << "/" << anio << endl;
            } else {
                cout << "El dia siguiente a la fecha es: " << dia+1 << "/" << mes << "/" << anio << endl;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (dia == 30) {
                cout << "El dia siguiente a la fecha es: 1/" << mes+1 << "/" << anio << endl;
            } else {
                cout << "El dia siguiente a la fecha es: " << dia+1 << "/" << mes << "/" << anio << endl;
            }
            break;
        case 12:
            if (dia == 31) {
                cout << "El dia siguiente a la fecha es: 1/01/" << anio+1 << endl;
            } else {
                cout << "El dia siguiente a la fecha es: " << dia+1 << "/" << mes << "/" << anio << endl;
            }
            break;
        case 2:
            if (dia == 28) {
                cout << "El dia siguiente a la fecha es: 1/" << mes+1 << "/" << anio << endl;
            } else {
                cout << "El dia siguiente a la fecha es: " << dia+1 << "/" << mes << "/" << anio << endl;
            }
            break;
        default:
            cout << "Mes invalido" << endl;
            break;
    }
    
    return 0;
}