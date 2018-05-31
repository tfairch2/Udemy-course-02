#include <iostream>
#include <map>

using namespace std;

int main()
{
    /*These Associative Containters use the name in the array as a key to the data that follows.
    It is initialized by writing the keyword map, then the data type for the key, the data type
    for the value, then the name of the map (in this case 'numbers')*/
    map<string, string> numbers;
    /*In the implementation of 'map' we are using the Pair Class.  For the first, we create a key,
    'Jones', and a value, '123'*/
    numbers["Jones"] = "365";
    numbers["Smith"] = "467";
    numbers["Brown"] = "111";
    /*To retrieve a particular value, we use the key.*/
    cout << "Jones: " << numbers["Jones"] << endl;
    /*This method shows the number of key-number values in the map.*/
    cout << "number of numbers: " << numbers.size() << endl;
    /*This erases a particular map's data*/
    numbers.erase("Smith");
    cout << "number of numbers: " << numbers.size() << endl;
    return 0;
}
