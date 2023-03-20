#include <iostream>
using namespace std;

int main() {
    int n, apretones;
    cout << "Ingrese el numero de personas en la reunion: ";
    cin >> n;
    apretones = n*(n-1)/2;
    cout << "El número total de apretones de mano en la reunión es: " << apretones << endl;
    return 0;


}