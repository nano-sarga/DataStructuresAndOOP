#include <iostream>
#include <array>


//Task 5:
template <typename T, size_t N>
void reverseArray(std::array<T, N>& arr) {
    std::array<T, N> reversed;
    int j = 0;
    
    std::cout << "Reversed array: \n";
    
    for (int i = N - 1; i >= 0; i--) {
        reversed[j] = arr[i];
        std::cout << reversed[j] << " ";
        j++;
        
    }
    
    std::cout << std::endl;
}

int main() {
    //5)
    std::array<int, 5> arr = {1, 2, 3, 4, 5};
    reverseArray<int, 5>(arr);
    
}