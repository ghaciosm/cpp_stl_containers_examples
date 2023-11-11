#include <iostream>
#include <deque>
#include <vector>
using namespace std; 
 
int main() 
{ 
 deque<int> dq = { 1, 2, 3, 4, 5 }; 
 
 deque<int>::iterator it = dq.begin(); 
 ++it; 
 
 it = dq.insert(it, 10); // 1 10 2 3 4 5 
 ++it;
 dq.insert(it, 2, 0);
 
 std::cout << "Deque contains:"; 
 for (it = dq.begin(); it != dq.end(); ++it) 
  cout << ' ' << *it; 
 cout << '\n'; 

 vector<int> v(2, 10); 
 
 dq.insert(it, v.begin(), v.end()); 
 std::cout << "Deque contains:"; 
 for (it = dq.begin(); it != dq.end(); ++it) 
  cout << ' ' << *it; 
 cout << '\n';
 
 return 0; 
} 