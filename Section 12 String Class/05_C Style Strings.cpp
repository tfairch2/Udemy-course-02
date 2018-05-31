#include <iostream>
#include <cstring>

using namespace std;

int main()
{
// C-style strings, a char array containing a series of characters and ending
//  with a null terminator
    char c1[] = {'h','e','l','l','o','\0'};
    char c2[] = " world!";
    cout << c1 << " " << c2 << endl;
//Sting compare will examine c1 and c2 and return -1 if c1 is less than c2, 0 if equal
//  and 1 if greater than
    int value = strcmp(c1, c2);
    cout << value << endl;
    strcat(c1, c2);
    cout << c1 << endl;
    return 0;
}
