#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

//Accesses but doesn't modify a data structure

using namespace std;

int main()
{
    vector<int> numbers;
//Creates a vector of the first ten integers    
    for (int i = 1; i <= 10; ++i) {
        numbers.push_back(i);
    }
//Outputs the sum of the vector contents just created
    int sum = 0;
    for (int i = 0; i < numbers.size(); ++i) {
        sum += numbers[i];
    }
    cout << "The sum is " << sum << endl;

//Accumulate, below, sums up the contents of the vector just as above
//  it just needs the be directed to the beginning and the end of the number range.
//  It's a library function and is much simpler than a user defined function
    int sum1 = accumulate(numbers.begin(), numbers.end(), 0);
    cout << "The sum is " << sum1 << endl;

//This puts a series of words into a string
    vector<string> words;
    words.push_back("a");
    words.push_back("man");
    words.push_back("a");
    words.push_back("plan");
    words.push_back("a");
    words.push_back("canal");
    words.push_back("panama");
//In this case, Accumulate puts each word into one long string with no spaces
    string palindrome =
       accumulate(words.begin(), words.end(), string(""));
    cout << palindrome << endl;
    return 0;
}
