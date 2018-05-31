#include <iostream>
//Demonstration of uses for strings
using namespace std;

int find(string word, char lookedFor) {
    for(int i = 0; i < word.length(); ++i) {
        if (word[i] == lookedFor) {
            return i;
        }
    }
    return -1;
}
//Using the find function from above to determine the position of our desired character
//  then rebuild the string starting from position 0 and going to that position
//  and concatenate the newChar then concatenate to that the rest of the string by using
//  substr and the position plus one
string replace(string word, char oldChar, char newChar) {
    int pos = find(word, oldChar);
    word = word.substr(0,pos) + newChar + word.substr(pos+1);
    return word;
}

int main()
{
    /*string word = "hello";
    cout << find(word, 'e');*/
    string word = "word";
    string newword = replace(word,'d','k');
    cout << "Old word: " << word << endl <<
       "New word: " << newword << endl;
    return 0;
}
