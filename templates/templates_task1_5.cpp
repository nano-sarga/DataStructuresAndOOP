#include <iostream>
#include <string>
#include <vector>


//Task 1.5:
template <typename T>
void linearSearch(std::vector<T> vec, T searchedElement ) {
   
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == searchedElement) {
            std::cout << "Element " << searchedElement
                << " is located at index " << i << std::endl;
            return;
        }
    }
    std::cout << searchedElement
        << " is missing" << std::endl;
}

int main() {
    //1.5)
    std::vector<int> vectorInt = { 2, 5, 8, 18, 357 };
    std::vector<double> vectorDouble = { 2.5, 5.8, 18.37, 3, 7};
    std::vector<std::string> vectorString = { "False" };
    
    linearSearch(vectorDouble, 7.7);
    linearSearch(vectorInt, 7);
    linearSearch(vectorInt, 357);
    std::cout << std::endl;
    
}