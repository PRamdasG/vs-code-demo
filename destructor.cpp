#include<iostream>
using namespace std;
 class Demo{
    private:
        int num1,num2;
    public:
        Demo(int n1, int n2){
            cout<<"inside constructor"<<endl;
            num1=n1;
            num2=n2;
        }
        void display(){
            cout<<"num1="<<num1<<endl;
            cout<<"num1="<<num2<<endl;
        }
        ~Demo(){
            cout<<"inside destructor"<<endl;
        }
 };
int main(int argc, char const *argv[])
{
    Demo obj(10,20);
    obj.display();
    return 0;
}
