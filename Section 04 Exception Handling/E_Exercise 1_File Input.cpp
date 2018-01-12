/*Exception handling with file input.  Very general.*/

#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ifstream file;

/*Bit mask*/
  file.exceptions(ifstream::failbit |
                  ifstream::badbit);
  try {

/*For attempting to open a file that doesn't exist.*/
     file.open("file.txt");


     while (!file.eof()) {
        cout << file.get();
     }
  }
  catch(ifstream::failure e) {
      cout << e.what() << endl;

/*This statement is just for clarity, to indicate that there
	was a problem.*/
      cout << "Error opening file." << endl;

/*This will stop the program so that it will stop trying to 
	open a non-existant file.*/
      return 1;
  }
  file.close();
  return 0;
}
