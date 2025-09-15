#include <iostream>
#include <array>


//Task 2:
void fillArray(std::array<int, 7>& arr, int value ) {
    std::cout << "Filled array: " << std::endl;

    for (int i = 0; i < 7; i++) {
        arr[i] = value;
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    //2)
    std::array<int, 7> arrFill;
    fillArray(arrFill, 42);
    std::cout << std::endl;

}
