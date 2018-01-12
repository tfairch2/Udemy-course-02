/*What to do with the exception when one is thrown.*/

#include <iostream>
#include <stdexcept>

using namespace std;

class DivideByZero : public runtime_error
{
    public:
       DivideByZero() :
          runtime_error("Divide by zero exception") {}
};

double quotient(double numer, double denom) {
    if (denom == 0) {
        throw DivideByZero();
    }
    else {
        return numer / denom;
    }
}

int main()
{
    double number1, number2, ratio;
    cout << "Enter a numerator: ";
    cin >> number1;
    cout << "Enter a denominator: ";
    cin >> number2;

/**/
    try {
        ratio = quotient(number1, number2);
        cout << "Result is: " << ratio << endl;
    }

/*Need to pass a reference, which will store the Exception Object
	when the Divide by Zero error is thrown.*/
    catch (DivideByZero &except) {

/*'what' returns the argument that we passed in when we called the 
	Constructor for the Divide by Zero object.*/
        cout << except.what() << endl;
    }
    return 0;
}
