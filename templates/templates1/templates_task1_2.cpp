#include <iostream>
#include <string>


//Task 1.2:
template <typename T>
void mySwap(T num1, T num2) {
    
    T swap = num1;
    num1 = num2;
    num2 = swap;

    std::cout << num1 << ", " << num2 << std::endl;
}

int main() {
    //1.2)
    mySwap<int>(2, 3);
    mySwap<double>(4.6, 24.5);
    mySwap<std::string>("Lisa", "Mona");
    std::cout << std::endl;
    
}