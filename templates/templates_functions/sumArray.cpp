#include <iostream>
#include <string>


//Task 1.3:
template <typename T>
T sumArray(T* arr, const unsigned size) {

    T sum;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    std::cout << "Sum of array = " << sum << std::endl;
    return sum;
}

int main() {
    //1.3)
    const unsigned size = 5;
    
    int arr[size] = { 2, 4, 7, 10, 7483 };
    sumArray<int>(arr, size);
    
    double arr1[size] = { 2.4, 4.7, 7.1, 10.74, 43.6 };
    sumArray<double>(arr1, size);
    
    std::string arr2[size] = { "h", "a", "p", "p", "y" };
    sumArray<std::string>(arr2, size);
    
    std::cout << std::endl;
    
}