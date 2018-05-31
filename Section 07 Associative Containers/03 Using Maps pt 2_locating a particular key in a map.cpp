#include <iostream>
#include <map>

/*Calculating the average of grades stored in a map.  This program asks us for a name in the map
then returns that persons grade, then lists all of the grades, then gives the average grade.*/

using namespace std;

int main()
{
    /*The Keys will be strings and the Values will be integers.*/
    map<string, int> grades;
    grades["Jones"] = 78;
    grades["Smith"] = 83;
    grades["Green"] = 92;
    string name;
    cout << "Enter a name to find: ";
    cin >> name;
    /*Here we are looking for a specified key.*/
    if (grades.find(name) != grades.end()) {
        cout << name << ": " << grades[name] << endl;
    }
    /*This is an iterator based search.  If the key isn't in the map
    we are prompted.*/
    else {
        cout << name << " not found." << endl;
    }
    double average = 0.0;
    int sum = 0;
    /*Creating the "Iterator" calling it 'it'.  Starting at the beginning of the map.
    The Iterator is standing in as the pointer to a particular item in the map.*/
    map<string, int>::iterator it = grades.begin();
    while (it != grades.end()) {
    /*Since we are only interested in the grades, to calculate the average, we look at 'second'
    which indicates the second item in the map, the grade.  If we write 'first' then 'it' will
    point to the name.*/
        cout << it->second << endl;
        sum += it->second;
        ++it;
    }
    cout << endl;
    average = sum / grades.size();
    cout << "The average grade is: " << average << endl;

    return 0;
}
