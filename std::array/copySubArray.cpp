#include <iostream>
#include <array>

//Task 7:
template <typename T, size_t N, size_t M>
std::array<T, M> copySubArray(const std::array<T, N>& source, int index) {
    std::array<T, M> copy = {};
    std::cout << "Copied array:\n";
    for (int j = 0; j < M; j++) {
        if (index + j < N) {
            copy[j] = source[index + j];
            std::cout << copy[j] << " ";
        }
    }
    return copy;
}

int main() {
    //7)
    std::array<int, 10> source = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto sub = copySubArray<int, 10, 5>(source, 2);

}