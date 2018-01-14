/*The first kind of 'sequential container' - the list.  This is the beginning
    of Linked Lists.*/
#include <iostream>
/*Need the list standard library.*/
#include <list>

using namespace std;

int main()
{
    list<string> names;
/*Adding content to the list using 'push_back'.*/
    names.push_back("Mary");
    names.push_back("Zach");
    names.push_back("Elizabeth");
/*To display the elements in the list we need an iterator to get to the beginning of
    the list.*/
    list<string>::iterator iter = names.begin();
    while (iter != names.end()) {
        cout << *iter << endl;
        ++iter;
    }

/*This is very like a Linked List, with a front and back of our list, and we
    can traverse the list forwards.......*/
    cout << "first item: " << names.front() << endl;
/*......and backwards.*/
    cout << "last item: " << names.back() << endl;
    names.reverse();
    list<string>::iterator riter = names.begin();
    while (riter != names.end()) {
        cout << *riter << endl;
        ++riter;
    }

/*Sorting the list*/
    names.sort();
    list<string>::iterator siter = names.begin();
    while (siter != names.end()) {
        cout << *siter << endl;
        ++siter;
    }
    return 0;
}
