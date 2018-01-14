/*More using the List Class*/
#include <iostream>
#include <list>

using namespace std;

/*Function created for displaying the list*/
void display(list<string> lyst) {
   list<string>::iterator iter = lyst.begin();
    while (iter != lyst.end()) {
        cout << *iter << endl;
        ++iter;
    }
}

int main()
{
    list<string> names;
    names.push_back("Mary");
    names.push_back("Zach");
    names.push_back("Elizabeth");
    list<string>::iterator iter = names.begin();
    while (iter != names.end()) {
        cout << *iter << endl;
        ++iter;
    }
    cout << "first item: " << names.front() << endl;
    cout << "last item: " << names.back() << endl;
    names.reverse();
    list<string>::iterator riter = names.begin();
    while (riter != names.end()) {
        cout << *riter << endl;
        ++riter;
    }
    names.sort();
    display(names);

/*The 'push_front' function adds to the array from the front instead of the back*/
    names.push_front("Barry");
    display(names);
    cout << "size of list: " << names.size() << endl;

/*'remove' allows specific items to be removed from the list*/
    names.remove("Elizabeth");
    display(names);

/*'pop_front' and 'pop_back' removes items from the front or back of the list
    depending on which function you use.*/
    names.pop_front();
    names.pop_back();
    display(names);

/*'clear' function removes all items from the array at once.*/
    names.clear();
/*'empty' function determines whether or not the list is actually empty.*/
    if (names.empty()) {
        cout << "list empty" << endl;
    }
    else {
        cout << "list not empty" << endl;
    }
    return 0;
}
