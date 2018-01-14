/*Demonstrating how to add values to either the front or back of the deque.  
    Any name ending with the letter 'p' is added to the front, and for any other letter
    the name will be added to the back of the deque.*/
#include <iostream>
#include <deque>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    deque<string> names;
    ifstream nameList;
    nameList.open("c:\\data\\names.txt");

/*Variable to store a line from the text file.*/
    string line;
    while (!nameList.eof()) {
/*Read a line in.*/
        getline(nameList, line);
/*Use an 'iterator' to get a name from the list then decrementing it to get
    to the last character.*/
        string::iterator it = line.end();
        --it;
    
        size_t pos = line.find(" ");
        string name = line.substr(0,pos);
        if (*it == 'p')
           names.push_front(name);
        else
           names.push_back(name);
    }
    deque<string>::iterator it = names.begin();
    while (it != names.end()) {
        cout << *it << endl;
        ++it;
    }
    return 0;
}
