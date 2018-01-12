#include <iostream>
#include <string>

/*Displaying two different arrays, an integer array and a string array.*/
using namespace std;

/*A void function to display our integer array*/
void display(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

/*Void function to display the string array*/
void displayStr(string arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

/*Creating an array of 10 integers, to be displayed.*/
    const int size = 10;
    int numbers[size];
    for (int i = 0; i < size; ++i) {
        numbers[i] = i+1;
    }

/*Creating an array of 10 strings, to be displayed.*/
    display(numbers, size);
    string names[] = {"Jim", "Fred", "Jane", "Bob", "Mary",
                       "Mike", "Terri", "Allison", "Mason",
                       "Meredith"};
    display(names, size);

/*A Generic Function can be created to display both kinds of arrays,
	regardless of their different data types.  This will be covered 
	in the next lecture.*/
    return 0;
}
