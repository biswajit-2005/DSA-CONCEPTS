#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int, int> freq;

    int arr[] = {1, 2, 2, 3, 1, 4};

    for (int x : arr)
    {
        freq[x]++; // hashing
    }

    for (auto p : freq)
    {
        cout << p.first << " -> " << p.second << endl;
    }
}
