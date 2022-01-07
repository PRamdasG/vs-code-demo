#include <iostream>
using namespace std;
class Base1{
    public:
        int base1;
        void num1(int b){
            base1 = b;
        }
};
class Base2{
    public:
        int base2;
        void num2(int a){
            base2 = a;
        }
};
class Derived : public Base1 , public Base2{
    public:
        void show(){
            cout <<"this is num 1 from base1 class: "<<base1 << endl;
            cout <<"this is num 2 from base2 class: "<<base2 << endl;
            cout <<"this is sum of base1 and base 2 class: "<<base1 + base2 << endl;    
        }
};
int main(int argc, char const *argv[])
{
    Derived obj1;
    obj1.num1(23);
    obj1.num2(45);
    obj1.show();
    return 0;
}
