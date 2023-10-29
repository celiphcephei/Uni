#include <iostream>
#include <algorithm>
#include <vector>

// Complexity: O(N)
template<typename T>
int sequential_search(const std::vector<T>& data, T value)
{
    for(int i{0}; i < data.size(); ++i){
        if(value == data.at(i)) return i;
    }
    return -1;
}

template <typename T>
int binary_search(const std::vector<T>& data, T value)
{
    int min{0}, max{(int)(data.size() - 1)};
    while(min <= max){
        int mid = (max - min) / 2 + min; //equivalent to: (min + max) / 2 but
                                         // without possibility of overflow
        // mid = ((unsigned int)low + (unsigned int) high)) >> 1;
        int mid = (static_cast<unsigned int>(max) + static_cast<unsigned int>(min)) >> 1;
        if(data.at(mid) == value) return mid;
        else if(data.at(mid) < value) min = mid + 1;
        else max = mid - 1;
    }
    return -1;
}

int main(){
    std::vector<std::string> vs{
        "Thorin", "Barin", "Fili",
        "Bombur", "Kili", "Gloin",
        "Oin", "Dwalin", "Ori",
        "Dori", "Bofur", "Bifur",
        "Nori"
    };
    int result = sequential_search(vs, std::string("Dwalin"));
    std::cout << "result = " << result << '\n';
    result = sequential_search(vs, std::string("Gimli"));
    std::cout << "result = " << result << '\n';
    
    sort(vs.begin(), vs.end());
    for(std::string s : vs) std::cout << s << ' ';
    std::cout << '\n';
    result = binary_search(vs, std::string("Gimli"));
    std::cout << "result = " << result << '\n';

    result = binary_search(vs, std::string("Gloin"));
    std::cout << "result = " << result << '\n';

    return 0;
}