#include <iostream>
#include <list>

using namespace std;

int main()
{
  list<int> sayilar = {1, 1, 10, 6, 8, 5, 5};
  cout << "sayilar: ";
  for (auto mevcut : sayilar)
  {
    cout << mevcut << " ";
  }
  cout << endl;

  sayilar.unique();
  cout << "unique: "; 
  for (auto mevcut : sayilar)
  {
    cout << mevcut << " ";
  }
  cout << endl;

  cout << "reverse: "; 
  sayilar.reverse();
  for (auto mevcut : sayilar)
  {
    cout << mevcut << " ";
  }
  cout << endl;
  
  sayilar.sort();
  cout << "sort: "; 
  for (auto mevcut : sayilar)
  {
    cout << mevcut << " ";
  }

  return 0;
}