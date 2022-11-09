#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int peso;
    double altura, imc;
    cout << "Calculadora de IMC" << endl;
    cout << "Introduce tu peso: ";
    cin >> peso;
    cout << "Introduce tu altura: ";
    cin >> altura;
    imc = peso / (altura * altura);
    cout << "Tu IMC es: "<< imc <<endl;
}