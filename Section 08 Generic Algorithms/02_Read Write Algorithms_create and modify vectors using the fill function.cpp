#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<typename T>
void display(vector<T> v) {
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> numbers;
    for (int i = 1; i <= 10; ++i) {
        numbers.push_back(i);
    }
    display(numbers);
//Fill takes a container with iteraters to a range and fills the range with a specified value
//  This puts 0 into each location of the vector just created
    fill(numbers.begin(), numbers.end(), 0);
    display(numbers);
//Here a vector of names is generated...
    vector<string> names;
    names.push_back("Jennifer");
    names.push_back("Raymond");
    names.push_back("David");
    display(names);

//  ...and fill replaces the names with empty space
    fill(names.begin(), names.end(), string(""));
    display(names);

//Here fill replaces the number 5 in the number vector created above with 10
//The first number is the one to replace and the second is what we replace it with
    replace(numbers.begin(), numbers.end(), 5, 10);
    display(numbers);

//Create a vector of words...
    vector<string> words;
    words.push_back("gift");
    words.push_back("to");
    words.push_back("recieve");
    display(words);

//  ...and replace the desired (incorrect) word with another (correct) word
    replace(words.begin(), words.end(), "recieve", "receive");
    display(words);
    return 0;
}
