#include <iostream>
//Further implementation of the Queue
using namespace std;

class Queue {
    private:
       string datastore[100];
       int back;
       const static int front = 0;
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
//Function to put item into the queue
       void in(string value) {
           ++back;
           datastore[back] = value;
       }
//  ...to remove an item...
       string out() {
           string retVal = datastore[front];
           shift();
           return retVal;
       }
//  ...to display the contents...
       void show() {
           for(int i = front; i <= back; ++i) {
               cout << datastore[i] << " ";
           }
           cout << endl;
       }
//  ...and return the count of items in the queue.
       int count() {
           int cnt = 0;
           for (int i = 0; i <= back; ++i) {
               ++cnt;
           }
           return cnt;
       }
//Display what is at the front of the queue...
       string qFront() {
           return datastore[front];
       }
//  ...and what is at the back...
       string qBack() {
           return datastore[back];
       }
//  ...and check to see if it's empty...
       bool isEmpty() {
           if (back == -1) {
               return true;
           } else {
               return false;
           }
       }
//  ...and to empty the queue
       void clear() {
           for (int i = front; i <= back; ++i) {
               datastore[i] = "";
           }
       }
};


int main()
{
    Queue letters;
    letters.in("A");
    letters.in("B");
    letters.in("C");
    cout << "front: " << letters.qFront() << endl;
    cout << "back: " << letters.qBack() << endl;
    cout << "count: " << letters.count() << endl;
    letters.out();
    cout << "front: " << letters.qFront() << endl;
    cout << "back: " << letters.qBack() << endl;
    cout << "count: " << letters.count() << endl;
    letters.in("D");
    cout << "front: " << letters.qFront() << endl;
    cout << "back: " << letters.qBack() << endl;
    cout << "count: " << letters.count() << endl;
    letters.out();
    cout << "front: " << letters.qFront() << endl;
    cout << "back: " << letters.qBack() << endl;
    cout << "count: " << letters.count() << endl;
    return 0;
}
