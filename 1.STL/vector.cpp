#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4};

    v.push_back(10);
    v.push_back(113);
    v.push_back(16);
    v.push_back(19);
    v.push_back(15);
    v.push_back(16);

    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;

    v.pop_back();
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    // using iterator

    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *i << "  ";
    }
    return 0;
}
