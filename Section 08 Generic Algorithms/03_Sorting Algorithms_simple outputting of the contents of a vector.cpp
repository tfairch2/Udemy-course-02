#include <iostream>
#include <vector>
#include <algorithm>
//How to use the generic algorithm 'sort' to work with data in a vector
using namespace std;

template <typename T>
void display(vector<T> v) {
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    const int sizeNumbers = 10;
    int numbers[] = {10,1,9,2,8,3,7,4,6,5};
//Copying the content of the array into the new vector 'nums'
    vector<int> nums(numbers, numbers + sizeNumbers);
    display(nums);
//Using the 'sort' algorithm from the last lesson
    sort(nums.begin(), nums.end());
    display(nums);
    const int size = 16;
    string words[] = {"now","is","the","time","for","all",
                      "good","people","to","come","to",
                      "the","aid","of","their","party"};
    vector<string> sentence(words, words + size);
    display(sentence);
    sort(sentence.begin(), sentence.end());
//Since the words in the string vector were entered in the order they belong
//  when we display the vector 'sentence' they are output in a proper sentence.
//  The 'sort' vector did not assemble the sentence, only output it in the order it was entered.
    display(sentence);
    return 0;
}
