#include <iostream>
#incluce <string>
using namespace std;
//Implementing a stack
//
class Stack {
    private:
       string datastore[100];
       int top;
    public:
       Stack() {
           top = -1;
       }
//Adds a string to the top of the stack
       void push(string value) {
           ++top;
           datastore[top] = value;
       }
//Removes the last entered string item from the stack
       string pop() {
           string retVal = datastore[top];
           --top;
           return retVal;
       }
//Takes nothing from the stack but returns the top item
       string peek() {
           return datastore[top];
       }
};

int main()
{

    return 0;
}
