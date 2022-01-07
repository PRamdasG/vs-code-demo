#include <iostream>
using namespace std;

class Base1{
    int data1;
    public:
        Base1( int x ){
            data1 = x;
            cout << "Here Base1 class constructor is called!!" << endl;
        }
        void printDataBase1(void){
            cout << "The  value of Base1 class: "<< data1 <<endl;
        }
};
class Base2{
    int data2;
    public:
        Base2( int x ){
            data2 = x;
            cout << "Here Base2 class constructor is called!!" << endl;
        }
        void printDataBase2(void){
            cout << "The  value of Base2 class: "<< data2 <<endl;
        }
};
class Derived : public Base2,virtual public Base1{
    int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d) : Base1(a) , Base2(b){
            derived1 = c;
            derived2 = d;
        }
        void printDataDerived(void){
            cout << "The value of derived1: " << derived1 <<endl;
            cout << "The value of derived2: " << derived2 <<endl;    
        }
};
int main(int argc, char const *argv[])
{
    Derived obj(23,45,67,89);
    obj.printDataBase1();
    obj.printDataBase2();
    obj.printDataDerived();
    return 0;
}
