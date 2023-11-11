#include <iostream>
#include <forward_list>

using namespace std;

//veri taşıyıcının başına eklenir
int main()
{ 
  cout << "list1:" << endl;
  forward_list<int> list1 = {1, 1, 10, 6, 8, 5, 5};
  list1.push_front(247); // Taşıyıcı başına eklendi.
  for (auto mevcut : list1)
  {
    cout << mevcut << " ";
  }
  cout << endl;

  list1.unique();
  list1.reverse(); // Taşıyıcı ters çevrildi.
  list1.sort();

  for (auto mevcut : list1)
  {
    cout << mevcut << " ";
  }
  cout << endl;

  cout << "list2:" << endl;
  forward_list<int> list2;
  list2.assign({1, 2, 3});
  forward_list<int> list3;
  list3.assign(list2.begin(), list2.end());
  list3.emplace_front(70);

  cout << "The elements of second forward list are : ";
    for (int& a : list2)
        cout << a << " ";
    cout << endl;
cout << "The elements of third forward list are : ";
    for (int& a : list3)
        cout << a << " ";
    cout << endl;


  return 0;
}