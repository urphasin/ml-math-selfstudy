#pragma once
#include <vector>

class Matrix {
  public:
    std::vector<std::vector<double>> data;
    int rows, cols;

    Matrix(int rows, int cols);
    void randomize();
    static Matrix multiply(const Matrix &a, const Matrix &b);
};