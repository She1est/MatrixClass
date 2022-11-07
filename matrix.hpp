#pragma once
#include <vector>
#include <string>

using Rows = std::vector<std::string>;


class Matrix {
public:
    Matrix();
    explicit Matrix(size_t n_rows, size_t n_cols);
    void reset(size_t n_rows, size_t n_cols);
    size_t row_count() const;
    size_t  col_count() const;
    std::string &at(size_t row, size_t col);
    [[nodiscard]] std::string at(size_t row, size_t col) const;
    std::vector<std::string>* operator[](size_t row);
private:
    std::vector<std::vector<std::string>> elements;
    size_t n_rows_;
    size_t n_cols_;
};

