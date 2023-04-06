#include <iostream>
#include <iomanip>

using std::setw;
using std::cout;
using std::endl;

void starline();

int main(){
    starline();
    cout << setw(9) << "Data Type" << setw(36) <<  "Range" << endl;
    starline();
    cout << setw(9) << "Char" << setw(36) << "-128 to 127" << endl
         << setw(9) << "Short" << setw(36) << "-32,768 to 32,767" << endl
         << setw(9) << "Int" << setw(36) << "System dependent" << endl
         << setw(9) << "Long" << setw(36) << "-2,147,483,648 to 2,147,483,647" << endl;
    starline();
    return 0;
}

void starline(){
    for(int i = 0; i < 45; i++){
        cout << '*';
    }
    cout << endl;
}