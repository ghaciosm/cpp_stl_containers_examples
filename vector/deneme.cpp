// C++ program to illustrate the
// iterators in vector
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> g1;

	for (int i = 1; i <= 5; i++)
		g1.push_back(i);

	cout << "Output of begin and end: ";
	for (auto i = g1.begin(); i != g1.end(); ++i)
		cout << *i << " ";

	cout << "\nOutput of rbegin and rend: ";
	for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
		cout << *ir << " ";

	cout << endl << "Size : " << g1.size();
  cout << "\nCapacity : " << g1.capacity();
  cout << "\nMax_Size : " << g1.max_size();

  // resizes the vector size to 4
  g1.resize(4);
  cout << "\nSize : " << g1.size();

  // checks if the vector is empty or not
  if (g1.empty() == false)
      cout << "\nVector is not empty";
  else
      cout << "\nVector is empty";

  // Shrinks the vector
  g1.shrink_to_fit();
  cout << "\nVector elements are: ";
  for (auto it = g1.begin(); it != g1.end(); it++)
      cout << *it << " ";

  return 0;
}
