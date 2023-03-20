#include <iostream>

using namespace std;

int main() {
    float T, M, F, T1, M1, F1, NotaFin;

    cout << "Digite las 3 notas: ";
    cin >> T >> M >> F;

    T1 = T * 0.50;
    M1 = M * 0.20;
    F1 = F * 0.30;
    NotaFin = T1 + M1 + F1;

    if (NotaFin >= 0 && NotaFin <= 5) {
        cout << "El estudiante está catalogado como pesimo." << endl;
    } else if (NotaFin >= 6 && NotaFin <= 10) {
        cout << "El estudiante está catalogado como malo." << endl;
    } else if (NotaFin >= 11 && NotaFin <= 15) {
        cout << "El estudiante está catalogado como regular." << endl;
    } else {
        cout << "El estudiante está catalogado como bueno." << endl;
    }

    return 0;
}