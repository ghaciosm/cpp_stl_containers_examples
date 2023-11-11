#include <iostream>
#include <set>

using namespace std;

int main()
{
    multiset<string> kisiler{"Yusuf", "Sefa", "Sefa", "Sezer"};

    for (auto mevcut : kisiler)
    cout << mevcut << ", ";

    multiset<int> a;
    a.insert(10);
    a.insert(10);
    a.insert(10);

    // it will give output 3
    cout<<endl << "count: " << a.count(10) << endl;

    // it will remove only one value of
    // 10 from multiset
    a.erase(a.find(10));

    // it will give output 2
    cout << a.count(10) << endl;

    // removing all instance of element from multiset
    // it will remove all instance of value 10
    a.erase(10);

    cout << a.count(10) << endl;

    return 0;
}