#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() 
{ 
    deque<int> dq; 
  
    // assign 5 values of 10 each 
    dq.assign(5, 10); 
  
    cout << "The deque elements: "; 
    for (auto it = dq.begin(); it != dq.end(); it++) 
        cout << *it << " "; 
  
    // re-assigns 10 values of 15 each 
    dq.assign(3, 15); 
  
    cout << "\nThe deque elements: "; 
    for (auto it = dq.begin(); it != dq.end(); it++) 
        cout << *it << " "; 
    cout << endl;

    deque<int> dq1; 
  
    // assigns all elements from 
    // the second position to deque1 
    dq1.assign(dq.begin() + 1, dq.end()); 
    dq1.push_front(6);
    dq1.push_back(8);
    cout << "\nThe deque1 elements: "; 
    for (auto it = dq1.begin(); it != dq1.end(); it++) 
        cout << *it << " "; 
    dq1.clear();
    cout<< endl << dq1.empty() << endl;

    return 0; 
}