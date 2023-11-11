//verilere erişim FIFO mantığıyla çalışır
//bu tasıyıcı verileri saklamak için deque sıralı taşıyıcısını kullanır

#include <iostream>
#include <queue>

using namespace std;

int main()
{
  queue<string> kisiler;
  kisiler.push("Yusuf");
  kisiler.push("Ramazan");
  kisiler.push("Sinan");
  kisiler.push("Mehmet");

  cout << kisiler.size() << endl; // 4
  while (!kisiler.empty())
  {
    cout << kisiler.front() << " ";
    kisiler.pop();
  }
  cout << endl<< kisiler.size() << endl;

  queue<int> gquiz;
    gquiz.push(10);
    gquiz.push(20);
    gquiz.push(30);
 
    
    cout << endl;
 
    cout << "\ngquiz.size() : " << gquiz.size();
    cout << "\ngquiz.front() : " << gquiz.front();
    cout << "\ngquiz.back() : " << gquiz.back();
 
    cout << "\ngquiz.pop() : ";
    cout << '\t' << gquiz.front();
    gquiz.pop();
    while (!gquiz.empty()) {
        cout << '\t' << gquiz.front();
        gquiz.pop();
    }
    cout << '\n';

  return 0;
}