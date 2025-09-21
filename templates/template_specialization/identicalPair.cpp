#include <iostream>
#include <string>
#include <boost/type_index.hpp>

//Task 3.4:
template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    Pair(const T1& a, const T2& b) : first(a), second(b) {}

    void print() const {
        std::cout << "First element: " << first
            << "\nSecond element: " << second << std::endl;
    }
};

template <typename T>
class Pair<T, T> {
private:
    T first;
    T second;

public:
    Pair(const T& a, const T& b) : first(a), second(b) {}

    void print() const {
        std::cout << "Pair of identical types" << std::endl;
    }
};

int main() {
    //3.4)
    Pair<int, std::string> p1 (0, "null");
    p1.print();
    std::cout << std::endl;
    
    Pair<std::string, double> p2("oh", 0.01);
    p2.print();
    std::cout << std::endl;
    
    Pair<std::string, std::string> p3 ("one", "two");
    p3.print();
}
