#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1 = "clean";
    string s2 = "clear";

    if (s1 > s2){
        cout << s1 << " is greater than " << s2 << endl;
    }
    else {
        cout << s2 << " is greater than " << s1 << endl;
    }
//The following line accomplishes the same thing as the above 6 lines of code
    cout << s1.compare(s2) << endl;
    return 0;
}
