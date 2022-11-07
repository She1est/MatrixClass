#include <iostream>
#include "matrix.hpp"

int main() {
    Matrix matrix(2, 2);
    matrix.at(1, 0) = "That";
    matrix.at(1, 1) = "This";
//    std::cout << matrix.at(1, 1) << std::endl;
    for(auto i = 0; i < matrix.row_count(); ++i) {
        std::cout << matrix.at(1, i)  << std::endl;
    }
    return 0;
}
