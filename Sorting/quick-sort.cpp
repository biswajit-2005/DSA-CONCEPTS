#include <iostream>
using namespace std;
int partition(int arr[], int lb, int ub)
{
    int pivot = arr[lb];
    int start = lb;
    int end = ub;
    while (start < end)
    {
        while (arr[start] <= pivot) // move start to the right and stop when (element >= pivot)
        {
            start++;
        }
        while (arr[end] > pivot) // move end to the left and stop when (element < pivot)
        {
            end--;
        }

        if (start < end)
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
    }
    // swap pivot with end
    int temp = arr[lb];
    arr[lb] = arr[end];
    arr[end] = temp;

    return end;
}
void quick_sort(int arr[], int lb, int ub)
{
    if (lb < ub) // it checks smallest sub array . dont call recursion for the sub array with one element(lb = ub).
    {
        int pivot = partition(arr, lb, ub); // partition returns the value of pivot index
        quick_sort(arr, lb, pivot - 1);
        quick_sort(arr, pivot + 1, ub);
    }
}

int main()
{
    int n;
    cout << "Enter the size of list :";
    cin >> n;
    int arr[n];
    cout << "enter the elements of array : \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    quick_sort(arr, 0, n - 1);
    cout << "\nSorted array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }

    return 0;
}