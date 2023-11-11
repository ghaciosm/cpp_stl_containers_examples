#include <forward_list>
#include <iostream>
using namespace std;

int main()
{
	forward_list<int> flist = { 10, 20, 30 };

	// Declaring a forward list iterator
	forward_list<int>::iterator ptr;

	// Inserting value using insert_after()
	// starts insertion from second position
	ptr = flist.insert_after(flist.begin(), { 1, 2, 3 });

	// Displaying the forward list
	cout << "The forward list after insert_after operation "
			": ";
	for (int& c : flist)
		cout << c << " ";
	cout << endl;

	// Inserting value using emplace_after()
	// inserts 2 after ptr
	ptr = flist.emplace_after(ptr, 2);

	// Displaying the forward list
	cout << "The forward list after emplace_after "
			"operation : ";
	for (int& c : flist)
		cout << c << " ";
	cout << endl;

	// Deleting value using erase.after Deleted 2
	// after ptr
	ptr = flist.erase_after(ptr);
	cout << "The forward list after erase_after operation "
			": ";
	// Displaying the forward list
	for (int& c : flist)
		cout << c << " ";
	cout << endl;



	// Deleting value in a range
	// another variant of erase which uses start and end iterator
	// and deletes all the values in between them
	ptr=flist.erase_after(flist.begin(), flist.end());
	cout << "The forward list after erase_after (range) operation "
			": ";
	// Displaying the forward list
	for (int& c : flist)
		cout << c << " ";
	cout << endl; 
    cout << flist.empty()<< endl; 
    flist.remove(10);
	cout << endl; 
    cout << flist.empty()<< endl;
	return 0;
}
