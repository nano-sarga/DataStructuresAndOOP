#include <iostream>
#include <string>


//Task 2.4:
template <typename T>
class Range {
private: 
    T start;
    T end;

public:
    Range(T _start, T _end) : start(_start), end(_end) {}

    bool conteins(const T& value) {
        if (value >= start && value <= end) {
            std::cout << "The value " << value 
                << " is included in the range" << std::endl;
            return true;
        }
        else {
            std::cout << "The value " << value
                << " is not included in the range" << std::endl;
            return false;
        }
    }

    T length() {
        T result = end - start;
        std::cout << "The length of range : " << result << std::endl;
        return result;
    }

    void display() {
        std::cout << "The boundary of the range э ["
            << start << ", " << end << "]" << std::endl;
        //∈

        std::cout << std::endl;
    }
    //ПОЛУЧИЛОСЬ 
    //a нет
    /*void display() {
        (void)_setmode(_fileno(stdout), _O_U8TEXT);
        std::wcout << L"The boundary of the range ∈ ["
            << start << L", "
            << end << L"]" << std::endl; // помогите... ну кручу верчу, не хочет мне дать поумничать
    }*/
};

int main() {
    //2.4)
    Range<int> range(3, 10);
    range.conteins(19);
    range.length();
    range.display();

    Range<char> range1('a', 'f');
    range1.conteins(70);
    range1.length();
    range1.display();
    
    Range<double> range2(3.10, 10.3);
    range2.conteins(911);
    range2.length();
    range2.display();
    std::cout << std::endl;
}
