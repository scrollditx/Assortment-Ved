#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    cout << "\nEnter the row's size: ";
    cin >> rows;

    cout << "Enter the col's size: ";
    cin >> cols;

    int matrix[rows][cols];

    cout << "\nEnter matrix elements: ";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "\nEnter elements matrix[" << i << "] [" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    cout << "\nOriginal Matrix\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int transpose[cols][rows];

    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "\nTranspose matrix:\n";
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}