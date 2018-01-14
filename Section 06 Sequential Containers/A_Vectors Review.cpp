/*A common data structure is a vector, which is a sequential structure.*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
/*Just declaring a vector - */
    //vector<int> numbers;

/*Declaring and initializing a vector*/
    vector<int> numbers(10);
    for (int i = 1; i < 11; ++i) {

/*Store values in the vector using 'push_back'*/
        numbers.push_back(i);
    }
    int sum = 0;

/*Use the size function to continue the loop until reaching the end of the vector.*/
    for (int i = 0; i < numbers.size(); ++i) {

/*Accessing the data in the elements of the vector using subscript notation to 
    pull the data at a desired element location.*/
        sum += numbers[i];
    }
    cout << "the total is " << sum << endl;
    return 0;
}
