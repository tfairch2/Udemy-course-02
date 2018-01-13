/*Managing input streams from the console.
    The basic method of getting input is using 'cin'.*/
#include <iostream>

using namespace std;

int main()
{
/*Input using 'cin' doesn't allow for spaces.  'getline' allows for spaces.
    Here the char variable 'c' is created.*/
    char c;
/*The char variable is input.  'get' allows for a character input.*/
    c = cin.get();
    do {
        cout.put(c);
        c = cin.get();
/*The 'end of file' character, eof, is ctrl-z.  This block will continue to get 
    input, one character at a time until ctrl-z is pressed.*/
    } while(!cin.eof());
    return 0;

}
