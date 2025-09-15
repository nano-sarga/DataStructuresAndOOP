#include <iostream>
#include <array>


//Task 6:
template <typename T, size_t N>
bool compareArrays(std::array<T, N>& first, std::array<T, N>& second) {

    for (int i = 0; i < N; i++) {
        if (first[i] =! second[i]) {
            std::cout << "Arrays are different" << std::endl;
            return false;
        }
    }
    std::cout << "Arrays are identical" << std::endl;
    return true;
}

int main() {
    //6)
    std::array<int, 5> a = {1, 2, 3, 4, 5};
    std::array<int, 5> b = {1, 2, 3, 4, 5};
    std::array<int, 5> c = {1, 2, 0, 4, 5};
    
    compareArrays(a, b);
    compareArrays(b,c);

}
