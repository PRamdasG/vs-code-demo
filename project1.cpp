#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;

class simpleCalculator
{
    double a, b;

public:
    float result;
    void setNumber(int num1, int num2)
    {
        a = num1;
        b = num2;
    }
    void getNumber()
    {
        cout << "enter the two number: " << endl;
        cin >> a;
        cin >> b;
    }
    int add()
    {
        result = a + b;
        return result;
    }
    int sub()
    {
        result = a - b;
        return result;
    }
    int mul()
    {
        result = a * b;
        return result;
    }
    double div()
    {
        result = a / b;
        return result;
    }
    void display()
    {
        cout << "The numbers are " << a << " and " << b << endl;
        cout << "Your result is: " << result << endl;
    }
};
class scientificCalculator : public simpleCalculator
{
public:
    float degrees;
    float inRadian(float);
    void getNum()
    {
        cout << "Enter the value in degrees: ";
        cin >> degrees;
        degrees = inRadian(degrees);
    }
    void sinFunction()
    {
        cout << "The value of sin(" << degrees << ") = " << sin(degrees) << endl;
    }
    void cosFunction()
    {
        cout << "The value of cos(" << degrees << ") = " << cos(degrees) << endl;
    }
    void tanFunction()
    {
        cout << "The value of tan(" << degrees << ") = " << tan(degrees) << endl;
    }
};
float scientificCalculator ::inRadian(float degrees)
{
    return (degrees * 3.14159) / 180;
}

int main(int argc, char const *argv[])
{
    simpleCalculator obj1;
    scientificCalculator obj2;
    int choice1;
    string val;
    int choice;
    cout << "**********This is a simple calculator**********" << endl;
    cout << "If you want scientific calculator type SCI and enter ";
    cout << "\nElse type any thing" << endl;
    cin >> val;
    if (val == "SCI")
    {
        cout << "1.SIN 2.COS 3.TAN " << endl;
        cin >> choice1;
        obj2.getNum();
        if (choice1 == 1)
        {
            obj2.sinFunction();
        }
        if (choice1 == 2)
        {
            obj2.cosFunction();
        }
        if (choice1 == 3)
        {
            obj2.tanFunction();
        }
    }
    else
    {
        cout << "1.ADDITION 2.SUBTRACTION 3.MULTIPLICATION 4.DIVISION " << endl;
        cout << "Please enter your choice: ";
        cin >> choice;
        obj1.getNumber();
        if (choice == 1)
        {
            obj1.add();
        }
        if (choice == 2)
        {
            obj1.sub();
        }
        if (choice == 3)
        {
            obj1.mul();
        }
        if (choice == 4)
        {
            obj1.div();
        }
        obj1.display();
    }
    return 0;
}
