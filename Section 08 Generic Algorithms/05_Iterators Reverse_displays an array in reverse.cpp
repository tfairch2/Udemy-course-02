#include <iostream>
#include <vector>
//Allows us to work backword thru a container, in this case a vector
using namespace std;

int main()
{
//Creating a vector of 10 numbers
    vector<int> numbers;
    for (int i = 1; i <= 10; ++i) {
        numbers.push_back(i);
    }
//Display the vector from beginning to end...
    for (vector<int>::iterator iter = numbers.begin();
         iter != numbers.end(); ++iter) {
             cout << *iter << " ";
         }
    cout << endl;
//  ...display the vector from the end to the beginning
    for (vector<int>::reverse_iterator riter = numbers.rbegin();
         riter != numbers.rend(); ++riter) {
             cout << *riter << " ";
         }

    return 0;
}
