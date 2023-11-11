// CPP Program to implement Deque in STL
#include <deque>
#include <iostream>

using namespace std;

void showdq(deque<int> g)
{
	cout << '\n';
	deque<int>::iterator it;
	for (it = g.begin(); it != g.end(); ++it)
		cout <<    *it << " ";
    cout << endl;
}

int main()
{
	deque<int> deq;
	deq.push_back(10);
	deq.push_front(20);
	deq.push_back(30);
	deq.push_front(15);
	cout << "The deque deq is : ";
	showdq(deq);

	cout << "\ndeq.size() : " << deq.size();
	cout << "\ndeq.max_size() : " << deq.max_size();

	cout << "\ndeq.at(2) : " << deq.at(2);
	cout << "\ndeq.front() : " << deq.front();
	cout << "\ndeq.back() : " << deq.back();

	cout << "\ndeq.pop_front() : ";
	deq.pop_front();
	showdq(deq);

	cout << "deq.pop_back() : ";
	deq.pop_back();
	showdq(deq);

	return 0;
}
