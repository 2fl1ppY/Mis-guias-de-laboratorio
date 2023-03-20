#include <iostream>
using namespace std;

int main() {
    double angulo_en_grados, medida_en_centesimal, medida_en_radianes;

    cout << "Ingrese el angulo en grados sexagesimales: ";
    cin >> angulo_en_grados;

    medida_en_centesimal = angulo_en_grados * (10.0/9.0);

    medida_en_radianes = angulo_en_grados * (3.1416/180.0);

    cout << "La medida en centesimal es: " << (medida_en_centesimal) << endl;
    cout << "La medida en radianes es: " <<(medida_en_radianes) << endl;

    return 0;
}