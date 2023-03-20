#include <iostream>
using namespace std;

int main() {
    int hora, min, duraenmin;
    double costo;
    cout << "inserta los minutos de su llamada: ";
    cin >> min;
    cout << "inserta las horas de su llamada: ";
    cin >> hora;
    duraenmin = (hora * 60) + min;
    if (duraenmin <= 3) {
        costo = 0.5;
    }
    else {
        costo = ((duraenmin - 3) * 0.1) + 0.5;
    }
    cout << "la duracion de su llamada en minutos fue de " << duraenmin << " y el costo es de " << costo << endl;
    return 0;
}