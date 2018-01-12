/*Creating an Exception Object, then how to throw that Exception Object.*/

#include <iostream>
#include <stdexcept>

/*This class inheirits from a class in the standard library.*/
class DivideByZero : public runtime_error
{
    public:

/*Constructor performs only one task, to catch an attempt to divide by 
	zero then display a message.*/
       DivideByZero() :
          runtime_error("Divide by zero exception"); {}
};

double quotient(double numer, double denom) {
    if (denom == 0) {
        throw DivideByZero();
    }
    else {
        return numer / denom;
    }
/*The above uses a pre-existing class from the standard library to catch
	one specific kind of error (there are other standard, pre-existing
	classes for exception handling).
  It was coded into the previous program, but here it is handled by the class.*/
}

int main()
{

    return 0;
}
