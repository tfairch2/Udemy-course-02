/*Allows the program to keep from crashing back to the O.S., in the event of an error.*/
#include <iostream>

using namespace std;
const int DivideByZero = 1;
int main()
{
    try {

/*Simple program for dividing two numbers.  Dividing by zero is a fatal error.*/
        int numer = 12;
        int denom = 0;

/*Test condition*/
        if (denom == 0) {
            throw DivideByZero;
        }
        else {
            cout << numer / denom;
        }
    }
    catch(int e) {

/*'Try' and 'Catch' are methods for catching errors before they crash the program.*/
        if (e == DivideByZero) {
            cout << "Can't divide by zero";
        }
    }
    return 0;

/*The test condition above is one situation where the program would crash.  The program
	will stop, not crash, in the event of an attempt to divide by zero.  This was 
	written for one specific error.  An Exception Class is used for catching
	more than one event which would cause an error.*/
}
