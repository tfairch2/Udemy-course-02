/*Creating a 'List Class' that can be used with multiple data types.*/

#include <iostream>
#include <vector>

using namespace std;

template <typename T>

/*The name of our class*/
class List {

/*The vector where we are going to store our data.  It needs to be 
	generic because it is to be usable for more than one data type.*/
    private:
       vector<T> datastore;

/*The default constructor, 'List'.  As a default constructor there is no 
	function body.*/
    public:
       List() { }

/*The placeholder T is used so that multiple data types can be added 
	using one function.*/
       void add(T item) {
           datastore.push_back(item);
       }

       void display() {
           for(int i = 0; i < datastore.size(); ++i) {
               cout << datastore[i] << endl;
           }
       }
};

int main()
{
/*The keyword 'string' tell the compiler to use string variables 
	with the 'List' class for this block.*/
    List<string> grocery;
    grocery.add("milk");
    grocery.add("eggs");
    grocery.add("bread");
    grocery.display();
    cout << endl;

/*Keyword 'int' tells the compiler to use integer variables with 
	the 'List' class.*/
    List<int> grades;
    grades.add(88);
    grades.add(72);
    grades.add(91);
    grades.display();
    return 0;
}
