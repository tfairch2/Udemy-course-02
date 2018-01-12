/*Generic class template.  This one works better with strings than the program in the last lesson.
    If we need to use a specific data type in a template, we use a template specialization to
    specify the data type we want to */
#include <iostream>

using namespace std;

template <typename T>
class Stack {
    private:
       T datastore[100];
       int top;
    public:
       Stack() {
           top = -1;
       }

       void push(int num) {
           ++top;
           datastore[top] = num;
       }

       T pop() {
           int val = datastore[top];
           datastore[top] = 0;
           --top;
           return val;
       }

       T peek() {
           return datastore[top];
       }
};

/*This is a 'Template Specialization'.*/
template<>
class Stack<string> {
    private:
       string datastore[100];
       int top;
    public:
       Stack() {
           top = -1;
       }

/*Using 'val' for a variable name for a string, instead of 'num'*/
       void push(string val) {
           ++top;
           datastore[top] = val;
       }

       string pop() {
           string val = datastore[top];
           datastore[top] = "";
           --top;
           return val;
       }

       string peek() {
           return datastore[top];
       }
};

int main()
{
/*Commenting out code from the last lesson.
    Stack<double> numbers;
    numbers.push(12);
    numbers.push(22);
    cout << numbers.peek() << endl;
    double value = numbers.pop();
    cout << numbers.peek() << endl;*/

    Stack<string> names;
    names.push("Mary");
    names.push("Joe");
    cout << names.peek() << endl;
    string name = names.pop();
    cout << names.peek() << endl;
    return 0;
}
