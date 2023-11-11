//verilere erişişim     LIFO ile olur
//bu taşıyıcı verileri saklamak için deque sıralı taşıyıcısını kullanır

#include <iostream>
#include <stack>

using namespace std;

int main()
{
  stack<string> kisiler;
  kisiler.push("Yusuf");
  kisiler.push("Ramazan");
  kisiler.push("Sinan");
  kisiler.push("Mehmet");

  cout << kisiler.size() << endl; // 4
  while (!kisiler.empty())
  {
    cout << kisiler.top() << ", ";
    kisiler.pop();
  }
  cout << kisiler.size() << endl; // ?

  return 0;
}
