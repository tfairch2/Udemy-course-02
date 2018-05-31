#include <iostream>
//Basics of manipulating a Queue
//This program adds letters to the Queue, removes one & displays the Queue, 
//    adds another to the back, removes another letter, shifts and re-displays the Queue
using namespace std;

class Queue {
    private:
       string datastore[100];
       int back;
       const static int front = 0;
//Moving an item out of the Queue by shifting each element one place back at a time
       void shift() {
           for(int i = front; i <= back; ++i) {
               datastore[i] = datastore[i+1];
           }
           --back;
       }
    public:
       Queue() {
           back = -1;
       }
       void in(string value) {
           ++back;
           datastore[back] = value;
       }
       string out() {
           string retVal = datastore[front];
           shift();
           return retVal;
       }
       void show() {
           for(int i = front; i <= back; ++i) {
               cout << datastore[i] << " ";
           }
           cout << endl;
       }
};


int main()
{
    Queue letters;
    letters.in("A");
    letters.in("B");
    letters.in("C");
    letters.show();
    letters.out();
    letters.show();
    letters.in("D");
    letters.show();
    letters.out();
    letters.show();
    return 0;
}
