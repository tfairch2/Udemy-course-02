/*These Function Templates work with two data types.*/
#include <iostream>

using namespace std;

/*These are the placeholders.*/
template <typename T, typename U>

/*Return type is 'T'.  Be sure and use the arguments correctly with the 
    return type.*/
T max(T arg1, U arg2) {

/*Conditional operator, 'arg1' and 'arg2'.
    Below reads:  if 'arg1' is greater than 'arg2', then return 'arg1', otherwise
    return 'arg2'*/
    return (arg1 > arg2) ? arg1 : arg2;
}

int main()
{
    double num1 = 35.56;
    int num2 = 130;
    cout << "Max value is: " << max(num1, num2) << endl;
/*If above is coded as "max(num2, num1)" the return will be wrong.*/
    return 0;
}
