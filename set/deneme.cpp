//taşıyıcıya sadece veri eklenebilir 
//veya silinebilir ancak düzenleme yapılamaz

#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<string> kisiler{"Yusuf", "Sefa", "Sefa", "Sezer"};
    //verileri benzersiz ve sıralı saklar
    for (auto mevcut : kisiler)
    cout << mevcut << " " << endl;

    set<char> a;
    a.insert('G');
    a.insert('F');
    a.insert('G');
    for (auto& str : a) {
        std::cout << str << ' ';
    }
    std::cout << '\n';

    set<int, greater<int> > s1;
    s1.insert(10);
    s1.insert(5);
    s1.insert(12);
    s1.insert(50);

    s1.insert(10);
 
    set<int, greater<int> >::iterator itr;
    cout << "\nThe set s1 is : \n";
    for (itr = s1.begin(); itr != s1.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;

    set<int> s2(s1.begin(), s1.end());

    cout << "\nThe set s2 after assign from s1 is : \n";
    for (itr = s2.begin(); itr != s2.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;
    s2.insert(70);
    s2.insert(30);
 
    // remove all elements up to 30 in s2
    cout << "\ns2 after removal of elements less than 30 "
            ":\n";
    s2.erase(s2.begin(), s2.find(30));
    for (itr = s2.begin(); itr != s2.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;

  return 0;
}