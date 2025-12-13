#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, int> m;
    m.insert({1, 10});
    m.insert(make_pair(2, 20));
    m[3] = 30;
    // iterator for loop
    // map<int,int>::iterator it; //or we can use auto keyword
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    // Range based for loop
    for (auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }

    m.erase(2);         // erase by key
    m.erase(m.begin()); // erase first element
    m.clear();          // erase all

    return 0;
}