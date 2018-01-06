#include <iostream>
#include <sstream>
#include <string>

using namespace std;

/*Base class*/
class Employee {
    private:
        string name;
        double pay;
    public:
        Employee() {
            name = "";
            pay = 0;
        }

        Employee(string empName, double payRate) {
            name = empName;
            pay = payRate;
        }

        string getName() const {
            return name;
        }

        void setName(string empName) {
            name = empName;
        }

        int getPay() {
            return pay;
        }

        void setPay(int payRate) {
            pay = payRate;
        }

        string toString() {
            stringstream stm;
            stm << name << ": " << pay;
            return stm.str();
        }
};

/*Derived class.  The colon indicates what the derived class is.  The 'Manager' class
	is derived from the 'Employee class'.  This way SEEMS backwards to how it
	SHOULD BE coded.
	First, use the word 'Class' then the name of the derived class, then a colon, then the
	keyword 'public' and the name of the base class from which you are deriving.  Then the
	name of any special members for that derived class are declared.*/

class Manager : public Employee {
    private:
       bool salaried;

    public:
/*The 'Constructor', the name of the class, 'Manager' followed by the parameter list,
	which are the 'name', the 'payRate' and whether or not they earn a salary.*/
       Manager(string name, double payRate, bool isSalaried)

/*Now, the Employee constructor is called using the colon then the name of the base class constructor,
	'Employee' then the parameters we are passing into it.*/
           : Employee(name, payRate)
        {
/*Set the 'salaried' member with the 'isSalaried' parameter.  This is the body of the constructor.*/
            salaried = isSalaried;
        }

/*This is the 'getter' for the salaried members to decide whether or not a particular manager
	object is salaried.*/
        bool getSalaried() {
            return salaried;
        }
};

int main()
{
/*Test program to see if the classes work.  First, the 'Employee' class is called,
	then the 1st object is declared, 'emp1' then the parameters 'name' and 'payRate'.*/
    Employee emp1("Mary Smith", 15.00);
    cout << "Employee name; " << emp1.getName() << endl;
    cout << "Employee pay rate: " << emp1.getPay() << endl;

/*The 'Manager' class is called, declare it's object, 'emp2' followed by it's parameters,
	'name', 'payRate' and the boolean 'isSalaried'.*/
    Manager emp2("Bob Brown", 1500, true);
    cout << "Employee name; " << emp2.getName() << endl;
    cout << "Employee pay rate: " << emp2.getPay() << endl;

/*A call to the 'getter'.*/
    cout << "Emp2 Salaried? " << emp2.getSalaried() << endl;

    return 0;
}
