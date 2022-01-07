#include <iostream>
using namespace std;
class A{
    public:
        A(){
            cout <<"This is class A: "<<endl;
        }
};
class B{
    public:
        B(){
            cout << "This is  class B: "<<endl;
        }
};
class C : public A,public B{
    public:
        C(){
            cout << "This is class C derived from  class A and Class B "<<endl;
        }
};
int main(int argc, char const *argv[])
{
    C obj1;
    return 0;
}
