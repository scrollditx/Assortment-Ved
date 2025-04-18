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

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "\nEnter elements matrix[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
        cout << endl;
    }

    int row_index;
    cout << "\nEnter row index: ";
    cin >> row_index;

    int row_sum = 0;
    for (int j = 0; j < cols; j++)
    {
        row_sum += matrix[row_index][j];
    }
    cout << "Sum of row " << row_index << ": " << row_sum << endl;

    int col_index;
    cout << "\nEnter column index: ";
    cin >> col_index;

    int col_sum = 0;
    for (int i = 0; i < rows; i++)
    {
        col_sum += matrix[i][col_index];
    }
    cout << "Sum of column " << col_index << ": " << col_sum << endl;

    return 0;
}
