#include <iostream>
#include <string>


//Task 2.3:
template <typename T, int Row, int Col>
class Matrix {
private:
    T matrix[Row][Col];

public:
    void set(int row, int col, T value) {
        matrix[row][col] = value;

        std::cout << "Your matrix changed (element A("
            << row << col << ") has been replaced with " << value << ")" << std::endl;
    }

    T get(int row, int col) const {
        T value = matrix[row][col];

        std::cout << "Your element A(ij) : " 
            << value << std::endl;
        return value;
    }

    void display() {
        std::cout << "Matrix: " << std::endl;

        for (int i = 0; i < Row; i++) {
            for (int j = 0; j < Col; j++) {
                std::cout << matrix[i][j] << " ";
            }
            std::cout << std::endl;
        }

        std::cout << std::endl;
    }

    Matrix <T, Row, Col> operator+(const Matrix<T, Row, Col>& other) const {
        Matrix<T, Row, Col> result;
        for (int i = 0; i < Row; i++)
            for (int j = 0; j < Col; j++)
                result.matrix[i][j] = matrix[i][j] + other.matrix[i][j];
        return result;
    }

};

int main() {
    //2.3)
    Matrix<double, 3, 4> matrix{};
    matrix.set(0, 0, 8);
    matrix.get(0, 0);
    matrix.display();

    Matrix<double, 3, 4> matrix2{};
    matrix2.set(0, 0, 2);
    matrix2.display();
    
    Matrix<std::string, 3, 4> matrix3{};
    matrix3.set(1, 1, "ᓚ₍⑅^..^₎♡");
    matrix3.display();

    Matrix<double, 3, 4> matrix4 = matrix + matrix2;
    matrix4.display();
    std::cout << std::endl;
}
