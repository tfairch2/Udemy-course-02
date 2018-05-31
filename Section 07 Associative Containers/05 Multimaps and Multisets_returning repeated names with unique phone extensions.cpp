#include <iostream>
#include <map>
#include <utility>

// Maps and Sets must have unique keys.  But we may need multiple keys.  This program
//   returns each occurance of a unique entry, having one item that repeats but the other
//   item that is different.  In this case there are three people named 'Jones' but each
//   having a different extension.  So each 'Smith' is returned with it's corresponding
//   extension.

using namespace std;

int main()
{
    //Initializing a Multimap
    multimap<string,string> numbers;
    numbers.insert(pair<string,string>("Smith", "123"));
    numbers.insert(pair<string,string>("Jones", "245"));
    numbers.insert(pair<string,string>("Brown", "111"));
    //A repeated key (for a different person with the same name, different extension)
    numbers.insert(pair<string,string>("Smith", "333"));

    numbers.insert(pair<string,string>("Green", "834"));
    numbers.insert(pair<string,string>("Smith", "627"));
    string searchName = "Smith";
    multimap<string,string>::iterator iter =
       numbers.find(searchName);
    multimap<string,string>::iterator last =
       numbers.upper_bound(searchName);
    for(; iter != last; ++iter) {
        cout << iter->first << ": " <<
           iter->second << endl;
    }
    return 0;
}
