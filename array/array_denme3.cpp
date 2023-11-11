// C++ code to demonstrate working of
// front() and back()
#include<iostream>
#include<array> // including header file to use stl array and there function 
using namespace std;
int main()
{
	// Initializing the array elements
	array<int,6> ar = {1, 2, 3, 4, 5, 6};

	// Printing first element of array
	cout << "First element of array is : ";
	int &a=ar.front();
	cout <<a<< endl;

	// Printing last element of array
	cout << "Last element of array is : ";
	int &b=ar.back();
	cout << b << endl;
	
	//change first and last element of array using these references
	a=10; //now 1 change to 10
	b=60; //now 6 change to 60
	
	//lets print array now 
	cout<<"Array after updating first and last element \n";
	for (auto x: ar)
	{
	    cout<<x<<" ";
	}
	cout<<endl;

    cout << endl << "------------------" << endl;
    cout << "The number of array elements is : ";
    cout << ar.size() << endl;
 
    // Printing maximum elements array can hold
    cout << "Maximum elements array can hold is : ";
    cout << ar.max_size() << endl;
	

	return 0;

}
