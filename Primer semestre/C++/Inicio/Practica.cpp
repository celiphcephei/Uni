// #include <iostream>

// using namespace std;

// int main(){
//     int a = 2;
//     int b = 3;
//     int edades[] = {24, 40, 7};
//     cout << sizeof(edades) / sizeof(edades[0]);
// }

// #include <iostream>

// using namespace std;

// int main(){
//     int edad = 0;
//     cout << "Edad: ";
//     cin >> edad;
//     if (edad >= 18) {
//         if (edad <= 40){
//             cout << "Puedes votar.";6
//         } else {
//             cout << "No puedes votar.";
//         }
//     } else {
//         cout << "No puedes votar.";
//     }
// }

#include <iostream>

using namespace std;

int main() {
    cout << "Calculadora" << endl << "Que quieres calcular" << endl << "(a)Multiplicacion, (b)Division" << endl;
    char opcion = 'a';
    int num1 = 0;
    int num2 = 0;
    int resultado = 0;
    cin >> opcion;
    if(opcion == 'a'){
        cout << "Calcular Mltiplicaciones" << endl << "Escribe el primer numero: ";
        cin >> num1;
        cout << "Escribe el segundo numero: ";
        cin >> num2;
        resultado = num1 * num2;
        cout << resultado;
    } else if(opcion == 'b') {
        cout << "Calcular Divisiones" << endl << "Escribe el primer numero: ";
        cin >> num1;
        cout << "EScribe el segundo numero: ";
        cin >> num2;
        resultado = num1 / num2;
        cout << resultado;
    } else {
        cout << "Lee bien";
    }
    return 0;
}