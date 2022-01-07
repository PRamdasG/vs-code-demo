#include <iostream>
using namespace std;

class My_Car
{
public:
    void My_Method()
    {
        cout << "MY CAR";
    }
};
int main()
{
    My_Car obj;
    obj.My_Method();
    return 0;
}