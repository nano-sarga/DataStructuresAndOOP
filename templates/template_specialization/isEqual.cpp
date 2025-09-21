#include <iostream>
#include <cstring>


//Task 3.2:
template <typename T>
bool isEqual(const T& first, const T& second) { return first == second; }

template <>
bool isEqual<const char*>(const char* const& first, const char* const& second) {
    return std::strcmp(first, second) == 0;
}

template <>
bool isEqual<char*>(char* const& first, char* const& second) {
    return std::strcmp(first, second) == 0;
}

int main() {
    //3.2)
    std::cout << std::boolalpha;
    
    std::cout << isEqual(3, 5) << std::endl;           
    std::cout << isEqual('a', 'a') << std::endl;       
    std::cout << isEqual("hello", "olleh") << std::endl;
    
}