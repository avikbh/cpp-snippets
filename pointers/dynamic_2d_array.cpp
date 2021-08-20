//! Below code will generate a 2D array integer to form a 5x5 matrix

#include <iostream>
using namespace std;
#define row 5
#define column 5

int main()
{
    cout << "Hola Mundo" << endl;

    int **matrix = new int *[row];
    for (int i = 0; i < row; i++)
    {
        matrix[i] = new int[column];
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            matrix[i][j] = 0;
        }
    }
    matrix[2][2] = 7;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++)
        delete[] matrix[i];

    delete[] matrix;

    cout << endl;
    return 0;
}