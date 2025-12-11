#include <iostream>
using namespace std;

// Insertion Sort function
void insertion(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i]; // current element to insert
        int j = i - 1;

        // Shift elements greater than key to the right
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        // Place key at its correct position
        arr[j + 1] = key;
    }
}

int main()
{
    int n;
    cout << "enter the size of array :";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Given Array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    insertion(arr, n);
    cout << "\nSorted array : \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }

    return 0;
}