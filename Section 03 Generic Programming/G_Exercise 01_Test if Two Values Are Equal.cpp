/*Creating a Generic Function to test whether or not two values are equal.*/
#include <iostream>

using namespace std;

/*'T' for our generic type.*/
template <typename T>
bool equals(T value1, T value2) {
    if (value1 == value2) {
        return true;
    }
    else {
        return false;
    }
}

/*The above generic function is useable for both integer values
	and for strings.*/

int main()
{
    int a, b;
    a = 1, b = 2;
    if (equals(a,b)) {
        cout << a << " and " << b << " are equal." << endl;
    }
    else {
        cout << a << " and " << b << " are not equal."
           << endl;
    }
    string word1, word2;
    word1 = word2 = "hello";
    if (equals(word1, word2)) {
        cout << word1 << " and " << word2 << " are equal."
           << endl;
    }
    else {
        cout << word1 << " and " << word2 << " are not equal."
           << endl;
    }
    return 0;
}
