#include "matrix.hpp"
#include <iostream>

// implementation of functions declared in matrix.hpp goes here
// function definitions for a class have their names prefixed with
// the class name and "::"

// initialize an empty NxN matrix
Matrix::Matrix(size_t N)
{
    size = N;
    matrix.resize(N, std::vector<int>(size, 0));
}

// Load a matrix based on user input
Matrix::Matrix(std::vector<std::vector<int>> nums)
{
    matrix = nums;
} 

Matrix Matrix::operator+(const Matrix &rhs) const
{
    return matrix;
}

Matrix Matrix::operator*(const Matrix &rhs) const
{
    return matrix;
}

// print out the matrix
void Matrix::print_matrix() const 
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            std::cout << matrix[i][j] << " ";
        }

        std::cout << std::endl;
    }
}

void Matrix::set_value(std::size_t i, std::size_t j, int n)
{
    matrix[i][j] = n;
}

int Matrix::get_value(std::size_t i, std::size_t j) const
{

    return matrix[i][j];
}

int Matrix::get_size() const
{
    return size;
}

int Matrix::sum_diagonal_major() const
{
    return 0;
}

int Matrix::sum_diagonal_minor() const
{
    return 0;
}

void Matrix::swap_rows(std::size_t r1, std::size_t r2)
{

}

void Matrix::swap_cols(std::size_t c1, std::size_t c2)
{

}