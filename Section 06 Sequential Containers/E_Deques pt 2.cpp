/*More regarding the Deque*/
#include <iostream>
#include <deque>

using namespace std;

/*'find' returns an integer representing the position in the deque where a desired
    value is located, if it is in the deque at all, or -1 if it doesn't exist in 
    the deque.*/
int find(deque<string> d, string value) {
    for (int i = 0; i < d.size(); ++i) {

/*The 'at' function takes in a integer value as an argument and returns the value
    stored at that position in the deque.*/
        if (d.at(i) == value) {
            return i;
        }
    }
/*The above 'for loop' searches the deque for a value, returns it if it exists or
    returns -1 if it doesn't exist.*/
    return -1;
}

int main()

/*This code will ask for a name to be retrieved and will return -1 if the name the user
    enters doesn't exist in the list.*/
{
    deque<string> line;
    line.push_back("David");
    line.push_back("Raymond");
    line.push_back("Cynthia");
    line.push_back("Brian");
    line.push_back("Jennifer");
    string name;
    cout << "Name to find: ";
    cin >> name;
    int pos = find(line, name);
    if (pos > -1) {
        cout << name << " found at position " << pos << endl;
    }
    else {
        cout << name << " not found." << endl;
    }
    deque<string>::iterator iter = line.begin();
    ++iter;
/*Insert a name at a desired location*/
    line.insert(iter, "Donnie");
    for(iter = line.begin(); iter < line.end(); ++iter) {
        cout << *iter << endl;
    }
    return 0;
}
