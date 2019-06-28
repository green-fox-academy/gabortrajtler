#include <iostream>

int main()
{
    // - Create (dynamically) a two dimensional array
    //   with the following matrix. Use a loop!
    //   by dynamically, we mean here that you can change the size of the matrix
    //   by changing an input value or a parameter or this combined
    //
    //   1 0 0 0
    //   0 1 0 0
    //   0 0 1 0
    //   0 0 0 1
    //
    // - Print this two dimensional array to the output

    int inputSize = 10;  // size of the Matrix
    int inputNum = 1;

    int matrix[inputSize][inputSize];
    int matrixSize = sizeof(matrix[inputSize]) / sizeof(matrix[inputSize][0]);

    for (int i = 0; i < matrixSize; ++i) {
        for (int j = 0; j < matrixSize; ++j) {
            if (i == j){
                matrix[i][j] = inputNum;
            } else {
                matrix[i][j] = 0;
            }
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}