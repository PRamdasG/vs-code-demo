#include<iostream>
using namespace std;
class Simple{
    public:
        int value;
        virtual void display(int v ){
            value = v;
            cout << "This is value of v from simple class "<< value << endl;
        }
};
class Derived : public Simple{
    public:
        int ans;
        void display(int v ){
            ans = v;
            cout << "This is value of ans from derived class "<< ans << endl;
        }
};


int main() {
    Simple *simple_class_ptr;
    Derived derived_obj;
    simple_class_ptr = &derived_obj;
    simple_class_ptr->display(90);


    // Derived *derived_class_ptr;
    // derived_class_ptr = &derived_obj;
    // derived_class_ptr->display(56);
    return 0;
}