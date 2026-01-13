#include <iostream>
using namespace std;

void merge(int arr[], int lb, int mid, int ub)
{
    int i = lb;       // 1st pointer of left
    int j = mid + 1;  // 1st pointer of right
    int k = lb;       // 1st pointer of temporary
    int sort[ub + 1]; // maintain a temporary list

    while (i <= mid && j <= ub) // check the limiting conditions
    {
        // compare 1st element of the both list , the elemnt which is smaller put it to the sorted array , and increase its pointer(++) and sorted pointer(k++) .
        if (arr[i] <= arr[j])
        {
            sort[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            sort[k] = arr[j];
            k++;
            j++;
        }
    }
    // put remaining elememts to the array
    if (i > mid) // if left sublist is over , i comes to end
    {
        while (j <= ub)
        {
            sort[k] = arr[j];
            j++;
            k++;
        }
    }
    else // if right sublist is over , j comes to the end
    {
        while (i <= mid)
        {
            sort[k] = arr[i];
            i++;
            k++;
        }
    }

    for (k = lb; k <= ub; k++) // coping to the original array
    {
        arr[k] = sort[k];
    }
}

void mergeSort(int arr[], int lb, int ub)
{
    if (lb < ub) // check the sublist has more than one elment
    {
        int mid = lb + (ub - lb) / 2;
        mergeSort(arr, lb, mid);
        mergeSort(arr, mid + 1, ub);

        merge(arr, lb, mid, ub); // this function will merge the sublist in sorted manner
    }
}

int main()
{
    int n;
    cout << "Enter size of array :";
    cin >> n;
    int arr[n];
    cout << "Enter elements :\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mergeSort(arr, 0, n - 1);
    cout << "sorted array :\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    return 0;
}