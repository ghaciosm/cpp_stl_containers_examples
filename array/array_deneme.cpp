#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main()
{
  array<int, 3> sayilar = {10, 20, 30};

  cout << "Size: " << sayilar.size() << endl;

  for (auto mevcut : sayilar)
  {
    cout << mevcut << endl;
  }

  reverse(sayilar.begin(), sayilar.end());

  for (auto mevcut : sayilar)
  {
    cout << mevcut << endl;
  }

  sayilar.fill(0);

  for (auto mevcut : sayilar)
  {
    cout << mevcut << endl;
  }
  return 0;
}