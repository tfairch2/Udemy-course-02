#include <iostream>
#include <sstream>
#include <string>
#include <vector>

/*What we want to be able to do is  create a collection of objects, in this caseeither 'Empoloyee' objects
    or 'Manager' objects, and be able to call a function on those objects and have the compiler determine
    at run-time which type of objects it's calling the function for.*/
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
/*Create an employee vector.*/
    vector<Employee> emps;

/*Create an employee object.*/
    Employee emp1("Jones", 25.00);

/*Create an manager object.  These parameters let the compiler know which class is correct.
    Three parameters indicate the 'Manager' function and not the 'Employee' function.*/
    Manager mgr1("Smith", 1200, true);

/*Put these objects in the vector.*/
    emps.push_back(emp1);
    emps.push_back(mgr1);

/*Call the 'grossPay' funtion for each object.*/
    for (int i = 0; i < emps.size(); ++i) {

/*Output the gross pay for each object using the 'grossPay' function.*/
        cout << emps[i].grossPay(40) << endl;
    }
    return 0;
}
