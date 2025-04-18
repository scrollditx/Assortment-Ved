#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    cout << "\nEnter the row's size: ";
    cin >> rows;

    cout << "\nEnter the col's size: ";
    cin >> cols;

    int arr[rows][cols];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "\nEnter elements for arr[" << i << "] [" << j << "] : ";
            cin >> arr[i][j];
        }
    }

    int largest = arr[0][0];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > largest)
            {
                largest = arr[i][j];
            }
        }
    }

    cout << "\nLargest element in array is: " << largest;

    return 0;
}