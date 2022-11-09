#include <iostream>
#include <math.h>

using std::cout;
using std::cin;
using std::endl;

int main(){
    double a, b, c, x1, x2, raiz;
    //Prueba a=2 b=9 c=3
    cout << "Ecuaciones cuadraticas" << endl;
    cout << "Introduce el valor de A: ";
    cin >> a;
    cout << "Introduce el valor de B: ";
    cin >> b;
    cout << "Introduce el valor de C: ";
    cin >> c;
    raiz = sqrt((b * b) - 4 * (a * c));
    x1 = (-(b) + raiz) / (2 * a);
    x2 = (-(b) - raiz) / (2 * a);
    cout << raiz << endl;
    cout << "X1 = " << x1 << endl;
    cout << "X2 = " << x2 << endl;
}