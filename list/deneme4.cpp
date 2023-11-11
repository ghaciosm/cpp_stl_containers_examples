#include <iostream>
#include <iterator>
#include <list>
using namespace std;

int main()
{
    // initializing lists
    list<int> l1 = { 1, 2, 3 };
    list<int> l2 = { 4, 5 };
    list<int> l3 = { 6, 7, 8 };
 
    // transfer all the elements of l2
    l1.splice(l1.begin(), l2);
 
    // at the beginning of l1
    cout << "list l1 after splice operation" << endl;
    for (auto x : l1)
        cout << x << " ";
 
    // transfer all the elements of l1
    l3.splice(l3.end(), l1);
 
    // at the end of l3
    cout << "\nlist l3 after splice operation" << endl;
    for (auto x : l3)
        cout << x << " ";

    cout <<endl<< l2.empty()<< endl; 
    
    list<int>::iterator it;
    list<int> l4 = { 6, 7, 8 };
    it = l4.begin();
    l1.splice(l1.end(), l4, it);
    cout << "list l1 after splice operation" << endl;
    for (auto x : l1)
        cout << x << " ";
}