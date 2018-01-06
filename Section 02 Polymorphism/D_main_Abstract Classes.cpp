/*An Abstract Class is a class with function declarations but not executable code.*/
#include <iostream>

using namespace std;

/*An Abstract Class can't be instantiated, but rather is a model for all of the derived classes
    in a chain of inheritance.  Other classes will be derived from the 'Shape' class.  'Shape'
    becomes an abstract class by making all of it's functions 'pure virtual'.*/
class Shape {
/*'pure virtual' functions.  Done by initializing to 0.*/
    virtual void setX(int xcor) = 0;
    virtual void setY(int ycor) = 0;
    virtual int getX() const = 0;
    virtual int getY() const = 0;
    virtual void draw() const = 0;
};

class Circle : public Shape {
    private:
       int x, y, radius;
    public:
       Circle(int xcor, int ycor, int r) {
           x = xcor;
           y = ycor;
           radius = r;
       }
       virtual void setX(int xcor) {
           x = xcor;
       }
       virtual void setY(int ycor) {
           y = ycor;
       }
       void setRadius(int r) {
           radius = r;
       }
       virtual int getX() const {
           return x;
       }
       virtual int getY() const {
           return y;
       }
       virtual int getRadius() const {
           return radius;
       }
       virtual void draw() const {
           cout << "drawing circle at: " <<
              getX() << ", " << getY() <<
              "with a radius of: " << getRadius() << endl;
       }
};

int main()
{
    Circle c1(2,3,5);
    c1.draw();
    return 0;
}
