#include <iostream>
using namespace std;

class A{
    public:
        A(){
            cout << "this is base class "<< endl;
        }
};
class B : public A{
    public:
        B(){
            cout << "this is class B derived from class A "<<endl;
        }
};
class C : public B{
    public:
        C(){
            cout << "this is class C derived from Class B "<<endl;
        }
};
int main(int argc, char const *argv[])
{
    B obj1;
    return 0;
}
