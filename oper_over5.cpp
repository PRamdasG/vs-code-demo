#include <iostream>
using namespace std;
class point
{
private:
    int a, b;

public:
    point(int i = 0, int j = 0)
    {
        a = i;
        b = j;
    }
    void print()
    {
        cout << "a = " << a << " b = " << b << endl;
    }
};
int main(int argc, char const *argv[])
{
    point obj(20, 30);
    obj.print();
    obj = 10;
    obj.print();
    return 0;
}
