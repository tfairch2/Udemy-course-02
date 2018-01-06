#include <iostream>
#include <sstream>
#include <string>

using namespace std;

// base class
class Employee {

/*Having the data members 'name' and 'pay' declared as 'Protected' instead of 'Private'
	means that they are accessible by any class derived from 'Employee'.  So now
	the Class 'Manager' will be able to use these two members because it is derived
	from 'Employee'.*/
    protected:
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

/*This function is for calculating hourly employee pay.*/
        double grossPay(int hours) {
            return pay * hours;
        }
};

// derived class

class Manager : public Employee {
    private:
       bool salaried;

    public:
       Manager(string name, double payRate, bool isSalaried)
           : Employee(name, payRate)
        {
            salaried = isSalaried;
        }

        bool getSalaried() {
            return salaried;
        }

/*Since 'pay', below, is a protected member of the Class 'Employee', above, and the Class 'Manager' is
	derived from 'Employee', then 'Manager' can directly access 'pay'.*/
        double grossPay() {
            return pay;
        }
};

int main()
{
    Employee emp1("Mary Smith", 15.00);
    cout << "Employee name; " << emp1.getName() << endl;
    cout << "Employee pay rate: " << emp1.getPay() << endl;

/*Passing in the value '40' to the 'grossPay' function, presuming a 40 hour work week.*/
    cout << "Employee gross pay: " << emp1.grossPay(40) << endl;

    Manager emp2("Bob Brown", 1500, true);
    cout << "Employee name; " << emp2.getName() << endl;
    cout << "Employee pay rate: " << emp2.getPay() << endl;
    cout << "Emp2 Salaried? " << emp2.getSalaried() << endl;
    cout << "Emp2 gross pay: " << emp2.grossPay() << endl;
    return 0;
}
