#include <iostream>
#include <array>


//Task: 4)
template <typename T, size_t N>
int findElement(std::array<T, N> arr, T searchedElement) {

    for (int i = 0; i < N; i++) {
        if (arr[i] == searchedElement) {
            std::cout << "Element " << searchedElement
                << " is located at index " << i << std::endl;
            return i;
        }
    }
    std::cout << searchedElement
        << " is missing" << std::endl;
    return -1;
}

int main() {
    //4)
    std::array<int, 5> arrSearch = { 9, 6, 7, 3, 5};
    findElement(arrSearch, 0);
    findElement(arrSearch, 7);

}
