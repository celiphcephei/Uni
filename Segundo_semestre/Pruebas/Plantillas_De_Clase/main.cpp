#include <iostream>

using std::cout;
using std::cin;
using std::endl;

template <class T>
class Pair{
    T num1, num2;
    public:
        Pair(): num1{0}, num2{0} {}
        Pair(T a, T b): num1{a}, num2{b} {}
        T maximum();
};
template <class T>
T Pair<T>::maximum(){
    return(num1 > num2 ? num1:num2);
}


int main(){
    Pair <int> maxnum{19, 12};
    Pair <double> maxnum2{19.2,12.3};
    cout << maxnum.maximum() << endl
         << maxnum2.maximum() << endl;
    
    return 0;
}