#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
//The Binary Search function is better for searching large sets of data
//  This function searches by dividing it's search in half each iteration and returns
//  the position in the data set where our desired number is located
using namespace std;
//The keyword 'key' is what we are seaching for
int binarySearch(vector<int> vec, int key)
{
    int first = 0;
    int last = vec.size()-1;
    while (first <= last) {
        int mid = (first + last) / 2;
//'mid' is the mid-point of the data set.  If the data we are seaching for is 
//  greater than mid, we go to the mid-point of the top half of data.  Likewise
//  if the data is less than mid.  We repeat, successively dividing the search field
//  in half until we get to the searched for data
        if (key > vec[mid]) {
            first = mid + 1;
        } else if (key < vec[mid]) {
            last = mid - 1;
        } else {
            return mid;
        }
    }
    return -(first + 1);
}

int main()
{
    vector<int> numbers;
    srand(unsigned(time(0)));
    for (int i = 0; i < 50; ++i) {
        numbers.push_back((rand()%100)+1);
    }
    sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    int key;
    cout << "Enter a number to search for: ";
    cin >> key;
    int retValue = binarySearch(numbers, key);
    if (retValue > -1) {
        cout << "Found number at: " << retValue << endl;
    } else {
        cout << "Number not found.";
    }
    return 0;
}
