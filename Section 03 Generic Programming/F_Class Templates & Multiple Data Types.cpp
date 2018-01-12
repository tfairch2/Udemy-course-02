#include <iostream>
#include <vector>

using namespace std;

/*The Map Class (CMap, below) is a way to store key value pairs.  To create a template, 
	we need to create a key for the template and a key for the value, 'T' and 'U' 
	(these are just placeholders)
  When we want to provide more than one data type to a class template, we provide 
	a placeholder for the first data type, insert a comma, then provide another 
	placeholder for the second data type.  Then use the placeholder any time we
	need to make a data type declaration.*/
template<class T, class U>

class CMap {
    private:

/*Creating two vectors - one for the keys and one for the values.*/
       vector<T> keys;
       vector<U> values;
    public:

/*Not defining a constructor, but rather a function with parameters 'key' and 'value'
	of type 'T' and type 'U', respectively.*/
       void insert(T key, U value) {

/*Push 'keys' into the 'key' vector and 'values' into the 'value' vector.*/
           keys.push_back(key);
           values.push_back(value);
       }

       void get(int n) {
           cout << keys[n] << ": " << values[n];
       }
};


int main()
{
/*In this program we are tracking grades using a string for the student's name
	and an integer for the student's grade.*/
    CMap<string, int> grades;
    grades.insert("Jones", 88);
    grades.insert("Smith", 90);

/*Outputting the grade for each element in the CMap.*/
    grades.get(0);
    cout << endl;
    grades.get(1);
    cout << endl;
    return 0;
}
