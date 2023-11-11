#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> kisiler;
    kisiler.insert({5, "Sezer"});
    kisiler[1] = "Sefa";

    // cout << kisiler.size();
    for (auto mevcut : kisiler)
    cout << mevcut.first << " -> " << mevcut.second << endl;
    cout << kisiler[5] << endl << endl;

    map<string, int> mp;
 
    // Insert some values into the map
    mp["one"] = 1;
    mp["two"] = 2;
    mp["three"] = 3;
 
    // Get an iterator pointing to the first element in the
    // map
    map<string, int>::iterator it = mp.begin();
 
    // Iterate through the map and print the elements
    while (it != mp.end()) {
        cout << "Key: " << it->first
             << ", Value: " << it->second << endl;
        ++it;
    }
    cout << endl <<"Size of map: " << mp.size() << endl;


    return 0;
}