#include <iostream>
#include <string>


//Task 1.4:
template <typename T>
bool notDefault(const T& value) {
    
    if (value != T{}) {
        std::cout << "This value (" << value << ") is not default"
            << std::endl;
        return true;
    }
    else {
        std::cout << "This (" << value << ") is default"
            << std::endl;
        return false;
    }
}

int main() {
    //1.4)
    notDefault<int>(9);
    notDefault < std::string>("");
    notDefault<double>(0.0);
    std::cout << std::endl;
    
}