/*Using Generic Programming, we can use one function to display two arrays of two
	different data-types.*/

#include <iostream>
#include <string>

using namespace std;

/*Format for a 'generic function' below.  'T' is used as a template for 'Type' placeholder.
	We put 'T' wherever we have a reference to the data-type we want to make flexible or 
	generic.  Now, at run-time, the compiler will replace the 'T' with the data-type
	of the argument we are passing in.
Now, both the integer array and the string array will be displayed using one display
	function call.*/


template <typename T>
void display(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

/*The 'max' function below will return the maximum of two values of the same data-type.*/
template <typename T>

/*Using references because the function might make use of integer variables.*/
T max(T &arg1, T &arg2) {
    if (arg1 > arg2) {
        return arg1;
    } else {
        return arg2;
    }
}

int main()
{

/*Commenting out the portion of the program from the beginning of the lecture.
	all of these code blocks make use of the template function for displaying
	the arrays.

    const int size = 10;
    int numbers[size];
    for (int i = 0; i < size; ++i) {
        numbers[i] = i+1;
    }
    display(numbers, size);
    string names[] = {"Jim", "Fred", "Jane", "Bob", "Mary",
                       "Mike", "Terri", "Allison", "Mason",
                       "Meredith"};
    display(names, size);*/


    int a = 12;
    int b = 24;
    cout << max(a, b) << endl;
    double x = 2.25;
    double y = .25;
    cout << max(x, y) << endl;
    string w1 = "apple";
    string w2 = "aardvark";
    cout << max(w1, w2) << endl;
    return 0;
}
