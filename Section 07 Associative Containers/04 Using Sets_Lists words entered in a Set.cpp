#include <iostream>
#include <set>
//An Associative container that instead of holding a key AND a value, it only holds a key
//Can store a list of items (words for example) in the set and lists them only once in the 
//  set even if they appear multiple times in the file of data.
//This program lists each word entered in the set once, no matter how many times we enter 
//  the word during execution.
using namespace std;

int main()
{
    //create a set by typing 'set', the data type then the key value
    set<string> words;
    string word = "";
    do {
        cout << "Enter a word (quit to quit): ";
        cin >> word;
        words.insert(word);
    } while (word != "quit");
    //Loop through the set
    set<string>::iterator it = words.begin();
    while (it != words.end()) {
        cout << *it << " ";
        ++it;
    }

    return 0;
}
