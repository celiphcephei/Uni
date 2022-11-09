#include<iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

void calcula(vector<int>&vect, int tam){
    // for(int numero: vect){
    //     cout << numero << endl;
    // }

    int mayor = 0;
    for(int i=0; i<=tam; i++){ //calcula el valor mas grande
        if(vect[i]>mayor){
            mayor = vect[i];
        }
    }
    cout << "El numero mas grande es: " << mayor << endl;
    
    int menor = mayor;
    for(int j=0; j<tam; j++){ //calcula el valor mas chico
        if(vect[j]<menor){
            menor = vect[j];
        }
    }
    cout << "El numero mas chico es: " << menor << endl;
    
    int suma;
    for(int k=0;k<tam; k++){
        suma += vect[k];
    }
    cout << "El la suma total es de: " << suma << endl;
}

int main() {
    int dato;
    vector <int> miVector;


    while(dato != -1){
        cout << "Número a ingresar (-1 para terminar): ";
        cin >> dato;
        miVector.push_back(dato);
    }
    miVector.pop_back();

    int tam = miVector.size();
    cout << "Total de datos ingresados: " << tam << endl;
    calcula(miVector, tam);
}