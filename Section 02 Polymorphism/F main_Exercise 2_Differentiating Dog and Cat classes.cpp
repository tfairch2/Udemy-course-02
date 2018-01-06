#include <iostream>
/*Using virtual functions, this program determines which 'talk' function to call
    based on which class is performing the function call.*/
using namespace std;

class Animal {
    public:
    virtual void talk() = 0;
};

class Dog : public Animal {
    public:
    virtual void talk() {
        cout << "Bow wow!" << endl;
    }
};

class Cat : public Animal {
    public:
    virtual void talk() {
        cout << "Meow!" << endl;
    }
};


int main()
{
    Dog fido;
    Cat kitty;
    fido.talk();
    kitty.talk();
    return 0;
}
