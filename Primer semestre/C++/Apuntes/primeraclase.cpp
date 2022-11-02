#include <iostream>

//using namespace std;

using std::cout;
using std::endl;
using std::cin;

int main(){
    int value = 5;
    float value2 = 5.5;
    char value3 = 'a';
    int value4 = int (value2);
    cout << value4 << endl;
    cout << "value = " << value << endl;
    cin >> value;
    cout << "value = " << value << endl;
    if (value > 10 && value < 20){
        cout << "El valor fue entre 10 y 20" << endl;
    } else if (value > 20 && value < 30){
        cout << "El valor esta entre 20 y 30" << endl;
    } else {
        cout << "El valor fue menor a 10" << endl;
    }

    for(int i = 0; i < 5; i++){
        cout << i << endl;
    }
    int i = 0; //start
    while (i < 5){ //stop
        cout << "while i " << i << endl;
        i = i + 2; //step
    }
    
    i = 0;
    do{
        cout << "do while " << i << endl;
        i = i + 1;
    } while (i < 5);

    return 0;
}