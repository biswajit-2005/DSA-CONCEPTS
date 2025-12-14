#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[10];
    cout << "Enter the elements of array :";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    // hashing
    vector<int> hash[10];
    for (int i = 0; i < 10; i++)
    {
        hash[arr[i] % 10].push_back(arr[i]);
    }
    return 0;
}