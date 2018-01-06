#include <iostream>
#include <sstream>
#include <string>

/*When creating a base class vector and then store base class 'employee' and derived class 'manager' objects
    in that vector, the compiler looks at the type of vector, not the type of the vector, to determine
    what function to call.  We can use pointers to get the compiler pick the right function to call.*/
using namespace std;

// base class
class Employee {
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

        double grossPay(int hours) {
            return pay * hours;
        }
};

// derived class

class Manager : public Employee {
    private:
       bool salaried;

    public:

        Manager(string name, double pay, bool isSalaried)
         : Employee(name, pay)
         {
             salaried = isSalaried;
         }

        bool getSalaried() {
            return salaried;
        }

        double grossPay(int hours) {
            if (salaried) {
                return pay;
            } else {
                return pay * hours;
            }
        }

        string toString() {
            stringstream stm;
            string salary;
            if (salaried) {
                salary = "Salaried";
            } else {
                salary = "Hourly";
            }
            stm << name << ": " << pay
                << ": " << salary << endl;
            return stm.str();
        }
};

int main()
{
    Employee emp1("Jones", 25.00);
    Manager mgr1("Smith", 1200, true);
    Employee *empPtr;
/*Pointer to the address of the object, to indicate the proper function to call (the one for employee).
    Using the address for the employee.*/
    empPtr = &emp1;
    cout << "Name: " << empPtr->getName() << endl;
    cout << "Pay: " << empPtr->grossPay(40) << endl;

/*Pointer for the 'manager' object.  Using the address of the 'manager' object.*/
    empPtr = &mgr1;
    cout << "Name: " << empPtr->getName() << endl;
    cout << "Pay: " << empPtr->grossPay(40) << endl;

/*The problem with the output of this program and the program from the previous chapter is resolved
    in the next lesson.*/
    return 0;
}
