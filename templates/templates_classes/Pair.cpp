#include <iostream>
#include <string>

//Task 2.1:
template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    Pair(const T1& a, const T2& b) : first(a), second(b) {}

    void display() const {
        std::cout << "First element: " << first
            << "\nSecond element: " << second << std::endl;
    }
};

int main() {
    //2.1)
    Pair<int, std::string> p1 (0, "your place in my array <3");
    p1.display();

    Pair<std::string, double> p2("Error", 4.04);
    p2.display();
    std::cout << std::endl;
}
