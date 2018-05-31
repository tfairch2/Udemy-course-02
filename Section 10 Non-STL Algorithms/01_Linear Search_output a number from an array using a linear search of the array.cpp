#include <iostream>
#include <cstdlib>
#include <ctime>
//An algorithm that conducts a linear search
using namespace std;

int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; ++i) {
        if (key == arr[i]) {
//Output the elements of the array...
            return i;
        }
    }
//  ...or output an error code
    return -1;
}

int main()
{
//Create an array of 20 numbers...
    const int size = 20;
    int numbers[size];
    srand((unsigned) time(0));
    for (int i = 0; i < size; ++i) {
//  ...randomly selected from 1 to 100...
        numbers[i] = (rand() % 100)+1;
//  ...and output all of them
        cout << numbers[i] << " ";
    }
    cout << endl;
    int key;
    cout << "Enter a key to search for: ";
    cin >> key;
    int retValue = linearSearch(numbers, size, key);
    if (retValue >= 0) {
        cout << "Key found at position " << retValue << endl;
    } else {
        cout << "Key not found.";
    }
    return 0;
}
