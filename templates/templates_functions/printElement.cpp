#include <iostream>


//Task 1.1:
template <typename T>
void printElement(const T& element) {
    std::cout << element << std::endl;
}

int main() {
    //1.1)
    printElement<int>(5);
    printElement<double>(5.5);
    printElement<std::string>("five");
    std::cout << std::endl;
    
}