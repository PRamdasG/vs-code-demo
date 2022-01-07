#include <iostream>
using namespace std;

class Base1{
    public : 
        void show(){
            cout << "HELLO WORLD!!!" <<endl; 
        }
};
class Base2{
    public : 
        void show(){
            cout << "HELLO MIGHTY WORLD!!!" <<endl; 
        }
};
class Derived: public Base1 , public Base2{
    int a;
    public:
        void show(){
             Base2 :: show(); 
        }
       
};
class B{
    public:
     void print(){
         cout << "how are you!!!" <<endl;
     }
};
class C : public B{
  
};
int main(int argc, char const *argv[])
{
    Derived obj;
    C obj1;
    obj1.print();
    obj.show();
    return 0;
}
