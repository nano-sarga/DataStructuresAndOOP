#include <iostream>
#include <vector>


//Task 1:
void createAndFill(size_t N) {
std::vector<int> vec(N);
    for (int i = 1; i < N + 1; i++) {
        vec[i]=i;
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Size of array: " << vec.size() << std::endl;
    std::cout << "Capacity of array: " << vec.capacity() << std::endl;
}

int main() {
    //1)
    createAndFill(9);
    
}