#include <iostream>
#include <eigen3/Eigen/Dense>

int main(int argc, char const *argv[])
{
    Eigen::Matrix2d mat;
    mat << 1, 2, 3, 4;

    std::cout << "Matrix:\n" << mat << std::endl;
    return 0;
}
