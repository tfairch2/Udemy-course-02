/*Can write multiple kinds of data to a string stream object that couldn't be written
    to string objects.*/
#include <iostream>
/*Need the 'sstream' library to use string streams.*/
#include <sstream>

using namespace std;

class Person {
    private:
       string first, middle, last;
       int age;
    public:
       Person(string f, string m, string l, int ag) {
           first = f;
           middle = m;
           last = l;
           age = ag;
       }

/*Using 'stringstream' we can output all three strings, f, m and l, and the int ag at the
    same time even though they are different data types.*/
       string ToString() {
           stringstream stm;
           stm << first << " " << middle << " " <<
              last << " " << age;

/*The output is converted to a string with 'stm.str' below.  We can now concatenate
    other data types to a string.*/
           return stm.str();
       }
};

int main()
{
    Person aPerson("George", "Fred", "Jones", 27);
    cout << aPerson.ToString() << endl;
    return 0;
}
