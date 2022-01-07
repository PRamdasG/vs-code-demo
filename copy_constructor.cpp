#include <iostream>
using namespace std;

class point
{
private:
    int a, b;

public:
    point(){a = 90 ; b = 32;}
    point(int o1, int o2)
    {
        a = o1;
        b = o2;
    }
    point(const point &obj)
    {
        cout << "copy constructor called: " << endl;
        a = obj.a;
        b = obj.b;
    }
    void display()
    {
        cout << "the result of the program is "
             << "a = " << a << " b = " << b << endl;
    }
};
int main(int argc, char const *argv[])
{
    point a1(20,50);
    a1.display();
    point a2 = a1;

    //a2 = a1;
    a2.display();

    return 0;
}
