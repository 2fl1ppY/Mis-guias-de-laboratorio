#include <iostream>
using namespace std;

int main() {
    int dias, mes, anio, totaldias;
    int diasMes;
    
    cout << "Ingrese el día: ";
    cin >> dias;
    cout << "Ingrese el mes: ";
    cin >> mes;
    cout << "Ingrese el año: ";
    cin >> anio;
    
    switch (mes) {
        case 1:
            diasMes = 0;
            break;
        case 2:
            diasMes = 31;
            break;
        case 3:
            diasMes = 31 + 28;
            break;
        case 4:
            diasMes = 31 + 28 + 31;
            break;
        case 5:
            diasMes = 31 + 28 + 31 + 30;
            break;
        case 6:
            diasMes = 31 + 28 + 31 + 30 + 31;
            break;
        case 7:
            diasMes = 31 + 28 + 31 + 30 + 31 + 30;
            break;
        case 8:
            diasMes = 31 + 28 + 31 + 30 + 31 + 30 + 31;
            break;
        case 9:
            diasMes = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
            break;
        case 10:
            diasMes = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
            break;
        case 11:
            diasMes = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
            break;
        case 12:
            diasMes = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
            break;
        default:
            cout << "Mes inválido";
            return 0;
    }
    
    totaldias = diasMes + dias;
    
    cout << "Es el día: " << totaldias << " del año: " << anio;
    
    return 0;
}
