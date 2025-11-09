#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    // Inserting elements
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "Elements: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    cout << "\nFront: " << v.front();
    cout << "\nBack: " << v.back();
    cout << "\nSize: " << v.size();
    cout << "\nCapacity: " << v.capacity();

    v.pop_back();
    cout << "\nAfter pop_back(): ";
    for (int x : v)
        cout << x << " ";

    v.insert(v.begin() + 1, 15);
    cout << "\nAfter insert: ";
    for (int x : v)
        cout << x << " ";

    v.erase(v.begin());
    cout << "\nAfter erase: ";
    for (int x : v)
        cout << x << " ";

    v.clear();
    cout << "\nAfter clear(), size: " << v.size() << endl;

    return 0;
}
