/*Utilizing the string stream operator, reading a line of grades from a file into 
    a string variable, copy that into a string stream object then read those values
    as integers in order to calculate an average for that line of grades.*/
#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

int main()
{
    // 100 90 80 70 60
/*The ifstream and stringstream objects*/
    ifstream gradeFile;
    stringstream grades;

/*Variables to store individual grades and to keep track of the total.*/
    int grade;
    int total = 0;
/*Open the file with the data*/
    gradeFile.open("c:\\data\\grades.txt");

/*Variable to store the line with the grades.*/
    string line;

/*Input the grades with the getline function.*/
    getline(gradeFile, line);

/*Put the line with the grades into the stringstream object.*/
    grades << line;

/*Close the file when we are finished with it.*/
    gradeFile.close();

/*For loop to take in each grade into the stringstream object*/
    for(int i = 0; i < 5; ++i) {

/*Using put to, put an individual grade from the grade stringstream into
    the grade variable.*/
        grades >> grade;
/*Add each grade to the 'total' until reaching the end of the stringstream.....*/
        total += grade;
    }
/*....then compute and display the average.*/
    double average = total / 5;
    cout << "average: " << average << endl;
    return 0;
}
