#include <iostream>
#include <chrono>
#include <thread>

int main() {
    std::string texto = "ssfgsdgdfsgsdfgsdgdsfgsjkdb\ngkdsf\nldfgsdfkjg";
    
    for (char c : texto) {
        std::cout << c;
        std::cout.flush();
        
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    
    std::cout << std::endl;
    
    return 0;
}
