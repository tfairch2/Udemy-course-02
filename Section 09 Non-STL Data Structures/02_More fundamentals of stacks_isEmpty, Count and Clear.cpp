#include <iostream>
#include <string>
using namespace std;
//More implementation of a stack
class Stack {
    private:
       string datastore[100];
       int top;
    public:
       Stack() {
           top = -1;
       }

       void push(string value) {
           ++top;
           datastore[top] = value;
       }

       string pop() {
           string retVal = datastore[top];
           --top;
           return retVal;
       }

       string peek() {
           return datastore[top];
       }
//Returns the number of elements in a stack
       int count() {
           return top + 1;
       }
//Empties all elements from the stack
       void clear() {
           for (int i = 0; i <= top-1; ++i) {
               datastore[i] = "";
           }
           top = -1;
       }
//Checks to see if the stack has any elements
       bool isEmpty() {
           if (top == -1) {
               return true;
           }
           else {
               return false;
           }
       }
};

int main()
{
//This program merely tests the implementation of the last two functions above
    Stack names;
    names.push("Mary");
    names.push("Joe");
    cout << "number of items: " << names.count() << endl;
    if (!names.isEmpty()) {
        names.pop();
    }
    cout << "number of items: " << names.count() << endl;
    names.clear();
    cout << "number of items: " << names.count() << endl;
    return 0;
}
