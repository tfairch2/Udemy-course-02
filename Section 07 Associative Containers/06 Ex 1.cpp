#include <iostream>
#include <map>
#include <fstream>

//Enter names with phone numbers then retrieve the phone numbers from a text file

using namespace std;

//Adding name and ph number into a text file
void showNumber(map<string,string> phonelist) {
    string name;
    cout << "Enter a name: ";
    cin >> name;
    cout << endl << "The number is: " <<
       phonelist[name] << endl;
}

void showMenu() {
    cout << "1. Get number" << endl;
    cout << "2. Quit" << endl;
    cout << endl;
    cout << "Enter choice: ";
}

string getName(string line) {
    int pos = line.find(",");
    return line.substr(0,pos);
}

string getNumber(string line) {
    int pos = line.find(",");
    return line.substr(pos+1);
}

int main()
{
//Creating the text file which will store the names and phone numbers.    
    map<string,string> phonelist;
    ifstream inFile("c:\\data\\phonelist.dat");
    string line, name, number;
    while(!inFile.eof()) {
        getline(inFile, line);
        name = getName(line);
        number = getNumber(line);
        phonelist[name] = number;
    }
    inFile.close();
    int choice = 1;
    while (choice != 2) {
        showMenu();
        cin >> choice;
        if (choice == 1) {
            showNumber(phonelist);
        }
    }
    return 0;
}
