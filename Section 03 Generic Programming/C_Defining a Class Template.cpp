/*Making a 'Generic Class' template.*/

#include <iostream>

using namespace std;

/*Like in the previous lecture on functions, we use a template.  Anyplace we need
	a reference to a data type, we use 'T' so that pop and peek, below, 
	operate using the same class, independant of the data type.*/
template <typename T>
class Stack {
    private:

/*Declaring a template array*/
       T datastore[100];

/*Integer used to keep track of where we are in the array.  The variable 'top' is
	used for the top of the array/stack (LIFO structure for a stack.)*/
       int top;

    public:
/*Constructor used to initalize 'top'*/
       Stack() {
           top = -1;
       }

/*Function to increment 'top' by one, giving us the next open position in the array.*/
       void push(int num) {
           ++top;
           datastore[top] = num;
       }

/*Function for returning the data in first available position in the array/stack, the top.*/
       T pop() {

/*Need to store the data in the top element of the stack before decrementing'top' (Remember
	"Data Structures"?)*/
           int val = datastore[top];

/*Need to clear out the data at the top*/
           datastore[top] = 0;
           --top;
           return val;
       }

/*Shows us what was popped off the stack.*/
       T peek() {
           return datastore[top];
       }
};

int main()
{
/*The data type for 'Stack' can be changed to whatever we want because we use a template
	class which uses a 'placeholder' data type, T.*/
    Stack<double> numbers;
    numbers.push(12);
    numbers.push(22);
    cout << numbers.peek() << endl;
    double value = numbers.pop();
    cout << numbers.peek() << endl;
    return 0;
}
