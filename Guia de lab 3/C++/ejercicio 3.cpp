#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, e, max;

    cout << "Digite los 5 numeros enteros: ";
    cin >> a >> b >> c >> d >> e;

    if (a > b && a > c && a > d && a > e) {
        max = a;
    } else if (b > a && b > c && b > d && b > e) {
        max = b;
    } else if (c > a && c > b && c > d && c > e) {
        max = c;
    } else if (d > a && d > b && d > c && d > e) {
        max = d;
    } else {
        max = e;
    }

    cout << "El numero mayor es: " << max << endl;

    return 0;
}