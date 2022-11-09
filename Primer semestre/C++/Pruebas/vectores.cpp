#include <iostream>
#include <vector>
using std::cout;
using std::vector;

void mi_metodo(int ar[], int valor, float &ref, float *ap1)
{
valor++;
ref++;
//*ap1++ cambia la direccion de la memoria
*ap1 = *ap1 + 1;

cout << "Dentro del metodo valor es: " valor << endl;
cout << "Dentro del metodo valor es: " ref << endl;
}

int main()
{
int x = 5;
float y = 10.54;
float z = 0;

float &ref = y //declaro referencia

float *ap = &y; //declaro apuntador

cout << "el valor a donde apunta ap es: " << *ap << endl;
// cout << "el apuntador apunta a la direccion: " << ap << endl; codigo malo sin *

ap = &z; 	// redirecciono al apuntador
int arr[3] = {0, 1, 2, 3}


mi_metodo(arr ,x, y, &z);
return 0;
}