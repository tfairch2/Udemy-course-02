#include <iostream>
#include <sstream>
#include <string>
#include <vector>

/*The problem with the compiler determining which function to call at run time based on the type of data stored
    in the variable we need to make the function in the base class a 'virtual function'.*/
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
/*Typing 'virtual' before the return data-type makes 'grossPay' a virtual function.  Now the compiler
    will look at the function, 'grossPay', and determine which code to run based on the object that
    is stored in the variable rather than just the data-type of the variable.
    The Base Class function MUST be a virtual function.*/
        virtual double grossPay(int hours) {
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
/*  The Derived Class function SHOULD be a virtual function.  Now the output
    will be correct.*/
        virtual double grossPay(int hours) {
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
    empPtr = &emp1;
    cout << "Name: " << empPtr->getName() << endl;
    cout << "Pay: " << empPtr->grossPay(40) << endl;
    empPtr = &mgr1;
    cout << "Name: " << empPtr->getName() << endl;
    cout << "Pay: " << empPtr->grossPay(40) << endl;

/*Now the vector is a Pointer vector.*/
    vector<Employee*> employees;

/*Push_back using References.*/
    employees.push_back(&emp1);
    employees.push_back(&mgr1);

/*Loop to cycle through the vectors to output for all the employees.*/
    for (int i = 0; i < employees.size(); ++i) {
        cout << "Name: " << employees[i]->getName()
           << endl;
        cout << "Pay: " << employees[i]->grossPay(40)
           << endl;
    }

/*Making functions 'virtual' we can store objects of any type, base class or derived class, in one place then call
    the function for that object based on the type of object that it is and the compiler determines dynamically
    which function should be called.  Helpful for objects of related classes, such as two typed of employees in this
    lesson.*/
    return 0;
}
