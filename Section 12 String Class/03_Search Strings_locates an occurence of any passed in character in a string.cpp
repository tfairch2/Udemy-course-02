#include <iostream>

using namespace std;

int main()
{
//'find', below, only locates the first occurrence of the string

    /*string s1 = "a pin in a haystack pin";
    int pos = s1.rfind("needle");
    if (pos >= 0) {
        cout << "found pin at position " << pos << endl;
    }
    else {
        cout << "no pin " << pos << endl;
    }*/


    string numbers = "0123456789";
    string identifier = "name";
//The method 'find_first_of' searches for any occurrence of a character in a passed in string
//  and returns the position of the character it finds
    int pos = identifier.find_first_of(numbers);
    if (pos >= 0) {
        cout << "illegal identifier" << endl;
    }
    else {
        cout << "legal identifier" << endl;
    }
    return 0;
}
