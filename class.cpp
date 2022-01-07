#include <iostream>
#include <iomanip>
using namespace std;
class test
{
public:
    double length, width, area1;
    void input()
    {
        cout << "enter the length: ";
        cin >> length;
        cout << "enter the width: ";
        cin >> width;
    }
    void area()
    {
        area1 = length * width;
    }
    void display()
    {
        std::cout << "the area of ractangle is: " << area1 << endl;
    }
};
int main()
{
    test obj;
    obj.input();
    obj.area();
    obj.display();
    return 0;
}