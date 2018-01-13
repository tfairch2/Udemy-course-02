/*Streaming to the screen has been done mostly with cout.  Now we will start using
    the 'put' function to stream individual characters to the screen*/
#include <iostream>

using namespace std;

int main()
{
/*Since individual characters are being streamed, single quotes are used.  The following
    block of code will output "hello world" on one line, but does it one character
    at a time, instead of as a string.*/
    /*cout.put('h');
    cout.put('e');
    cout.put('l');
    cout.put('l');
    cout.put('o');
    cout.put(' ');
    cout.put('w');
    cout.put('o');
    cout.put('r');
    cout.put('l');
    cout.put('d');
    cout.put('!').put('\n');*/
/*The '\n' adds a new line after the exclamation point.


The following will stream the same phrase in strings, instead of characters.*/
    cout << "hello, world!" << endl;

/*The keyword 'flush' immediately clears out the buffer which stores the output string.
    This is useful for conserving memory space.*/
    cout << "hello, world!" << flush;

/*The keyword 'ends' writes a null character then flushes the buffer.*/
    cout << "hello, world!" << ends;
    return 0;
}
