#include <iostream>
#include <array>


//Task: 3)
template <size_t N>
int countEven(std::array<int, N>& arr) {
    int count = 0;

    for (int i = 0; i < N; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
        else { continue; }
    }

    std::cout << "Count of even numbers is: " << count << std::endl;
    return count;
}

int main() {
    //3)
    std::array<int, 6> arrEven = { 1, 2, 3, 4, 5, 6 };
    int count = countEven(arrEven);
    std::cout << std::endl;
    
}
