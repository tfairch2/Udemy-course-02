/*Deque is a "Double Ended Queue".  Like a queue in that items are added and removed
    from the ends of the list, but a queue adds only to the back and removes only from
    the front.  A deque can add and remove from the front or the back, whichever you choose.*/
#include <iostream>
/*Need the deque library*/
#include <deque>

using namespace std;

int main()
{
/*Simulating a line of customers*/
    deque<string> line;
/*Can push items onto the list at the front or the back, as desired.*/
    line.push_back("Customer 1");
    line.push_front("Customer 2");
    line.push_back("Customer 3");
    for (int i = 0; i < line.size(); ++i) {
        cout << line[i] << endl;
    }
/*'pop_front' and 'pop_back' work as expected*/
    line.pop_back();
    line.pop_front();
    for (int i = 0; i < line.size(); ++i) {
        cout << line[i] << endl;
    }
    cout << "size of line: " << line.size() << endl;
    return 0;
}
