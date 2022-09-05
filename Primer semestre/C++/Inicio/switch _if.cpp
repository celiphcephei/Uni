// #include <iostream>

// using namespace std;

// int main() {
//     int edad = 0;
//     cout << "Edad: ";
//     cin >> edad;
//     if(edad < 18) {
//         cout << "No puedes votar";
//     } else if(edad > 40) {
//         cout << "No puedes votar";
//     } else {
//         cout << "Puedes votar";
//     }

// }

#include <iostream>

using namespace std;

int main() {
    int opcion = 0;
    cout << "Introduce una opcion: ";
    cin >> opcion;
    switch(opcion) {
        case 1:
            cout << "Opcion 1";
            break;
        case 2:
            cout << "Opcion 2";
            break;
        default:
            cout << "Eso no existe";
    }
    return 0;
}