// Renato Garcia Moran A01799387
// Ejercicio 4 examen estadistica

#include <iostream>

using std::cout;
using std::endl;

double probcump(int n);

int main() {
    int n = 0;
    while (probcump(n) < 0.5) {
        n++;
    }
    cout << n << endl;
    return 0;
}

double probcump(int n) {
    double probabilidad = 1.0;
    for (int i = 1; i <= n; i++) {
        probabilidad *= (365.0 - i + 1) / 365.0;
    }
    probabilidad = 1 - probabilidad;
    return probabilidad;
}