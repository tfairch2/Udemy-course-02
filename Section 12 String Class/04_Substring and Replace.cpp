#include <iostream>
//Modifying contents of a string
using namespace std;

int main()
{
    string s1 = "a needle in a haystack";
    string word = "needle";
//finds the position of a searched word
    int pos = s1.find(word);
// pass in the starting position and the number of characters you want
//  to pull out of the string...
    string s2 = s1.substr(pos, word.length());
    cout << s2 << endl;
//  ...or pass in the starting position and substr pulls out all characters
//  to the end of the string
    string s3 = s1.substr(pos+word.length()+1);
    cout << s3 << endl;
//replaces the searched word of a string by taking the starting position, pos, 
//  replacing the specified number of characters, word.length(), with the data
//  to be inserted
    s1.replace(pos, word.length(), "pin");
    cout << s1 << endl;
    return 0;
}
