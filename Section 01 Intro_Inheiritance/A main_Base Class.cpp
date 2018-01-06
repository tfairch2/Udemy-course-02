/*Inheiritance and Classes*/


#include <iostream>
/*The library 'sstream' allows us to stream a double into a string*/
#include <sstream>
#include <string>


using namespace std;

class Employee {
    private:
        string name;
        double pay;

    public:

/*The default constructor*/
        Employee()
	{
            name = "";
            pay = 0;
        }

        Employee(string empName, double payRate) {
            name = empName;
            pay = payRate;
        }
/*Getters and setters. */
        string getName() const {
            return name;
        }

        void setName(string empName) {
            name = empName;
        }

        double getPay() {
            return pay;
        }

        void setPay(double payRate) {
            pay = payRate;
        }

/*Function, 'toString'*/
        string toString() {
            stringstream stm;

/*Here we are using the string var 'name' with the double var 'pay'*/
            stm << name << ": " << pay;
            return stm.str();
        }
};
int main()
{
/*These two Employee objects are to test the 'Employee()' Class.  These
  'Classes' use a string var and a double var, made possible by the
   'sstream library.'*/
    Employee emp1("Jayne Smith", 35000);
    Employee emp2("Will Taylor", 32000);

/*These steps write out the values, hard coded in the program, of the above objects.*/
    cout << emp1.toString() << endl;
    cout << emp2.toString() << endl;
    return 0;
}
