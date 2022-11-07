#include "matrix.hpp"


Matrix::Matrix(size_t n_rows, size_t n_cols)
    : n_rows_(n_rows)
    , n_cols_(n_cols)
{
    reset(n_rows, n_cols);
}

Matrix::Matrix() {
    reset(0, 0);
}

void Matrix::reset(size_t n_rows, size_t n_cols) {
    if(n_rows == 0 || n_cols == 0) {
        n_rows_ = 0;
        n_cols_ = 0;
    }
    n_rows_ = n_rows;
    n_cols_ = n_cols;
    elements.assign(n_rows_, std::vector<std::string>(n_cols_));
}

size_t Matrix::row_count() const {
    return n_rows_;
}

size_t Matrix::col_count() const {
    return n_cols_;
}

std::string &Matrix::at(size_t row, size_t col) {
    return elements.at(row).at(col);
}

std::string Matrix::at(size_t row, size_t col) const {
    return elements.at(row).at(col);
}

std::vector<std::string> &Matrix::operator[](size_t row) {
    return std::vector<std::string>("here", "there");
}