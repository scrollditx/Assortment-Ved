#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the array's size: ";
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter elements for arr[" << i << "] : ";
        cin >> arr[i];
    }

    cout << "\n Negative elements are: ";
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}