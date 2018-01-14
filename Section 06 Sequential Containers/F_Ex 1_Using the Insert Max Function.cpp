/*A more practical use of an iterator.  Inserts a value into a list as long as it
    is larger than the other values already in the list.*/
#include <iostream>
#include <list>

using namespace std;

void display(list<int> lyst) {
   list<int>::iterator iter = lyst.begin();
    while (iter != lyst.end()) {
        cout << *iter << endl;
        ++iter;
    }
}
/*The first parameter is a reference to a list of values and the second is the value.*/
void insertMax(list<int> &lyst, int value) {

/*First, we sort the list then check to see if the value at the end of the list
    is larger than the value we wish to add.  After sorting the list, that 
    end of the list value will be the largest value.*/
    lyst.sort();
    int max = lyst.back();
    if (value > max) {
        lyst.push_back(value);
    }
}

int main()
{
    list<int> numbers;
/*First push_back 0 to the list to initialize the list and remove any random data
    which may already reside at the location in memory for the beginning of the list.*/
    numbers.push_back(0);
    int number;
    for(int i = 1; i <= 10; ++i) {
        cout << "Enter a number: ";
        cin >> number;
        insertMax(numbers, number);
    }
    display(numbers);
    return 0;
}
