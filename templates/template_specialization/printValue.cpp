#include <iostream>
#include <string>


//Task 3.1:
template <typename T>
void printValue(const T& value) {
    std::cout << value << std::endl;
}

template <>
void printValue<bool>(const bool& value) {
    std::cout << (value ? "true" : "false") << std::endl;
}

template <>
void printValue<char*>(char* const& value) {
    std::cout << "\"" << value << "\"" << std::endl;
}

template <>
void printValue<const char*>(const char* const& value) {
    std::cout << "\"" << value << "\"" << std::endl;
}

int main() {
    //3.1)
    printValue(2);
    printValue(2.2);
    printValue<std::string>("hi");
    printValue('a');
    printValue(false);
    printValue(true);
    
    char message[] = "sos";
    printValue(message);
}
