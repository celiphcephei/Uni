#include <iostream>

int GCD(int a, int b){
    while(b != 0){
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main(){
    int a, b; std::cin >> a >> b;
    std::cout << GCD(a, b) << "\n";
    return 0;
}