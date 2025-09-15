#include <iostream>
#include <string>

template <typename T, int N>
class FixedArray {
private:
    T arr[N];

public:
    void set(int index, T value) {
        arr[index] = value;
        
        std::cout << "Your array changed (element with index"
            << index << "has been replaced with " << value << ")" << std::endl;
    }

    T get(int index) const {
        T value = arr[index];

        std::cout << "Your value with index "
            << index << ": " << value << std::endl;
        return value;
    }

    int size() const {
        std::cout << "Size of your array: " << N << std::endl;
        return N;
    }

    void display() {
        std::cout << "Array: " << std::endl;

        for (int i = 0; i < N; i++) {
            std::cout << arr[i] << " ";
        }

        std::cout << std::endl;
    }
};


int main() {
    //2.2)
    FixedArray<int, 7> arrInt{};
    arrInt.set(5, 164);
    arrInt.get(5);
    arrInt.display();
    
    FixedArray<double, 7> arrDouble{};
    arrDouble.set(3, 16.4);
    arrDouble.get(3);
    arrDouble.display();
    
    FixedArray<std::string, 7> arrString{};
    arrString.set(6, "hi ^-^");
    arrString.get(6);
    arrString.display();
    std::cout << std::endl;
}
