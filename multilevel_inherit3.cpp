#include <iostream>
using namespace std;
class Vehicles{
    public:
        string data;
        Vehicles(){
            cout << "this is vehicle class"<<endl;
            cout << "enter category for vehicle"<<endl;
            cin >> data;
        }
       
};
class Car : public Vehicles{
    public:
        int numWheel;
        Car(){
            cout << "this is "<< data<<" class"<<endl;
            cout << "please enter the number of wheels: "<<endl;
            cin >> numWheel;
        }
};
class BMW : public Car{
    public:
        BMW(){
            cout << "this is " <<numWheel <<" class"<<endl;
        }
        void display(){
            cout << "your output is : " << data << " with " << numWheel << " wheels. " <<endl;
        }
};
int main(int argc, char const *argv[])
{
    BMW obj1;
    obj1.display();
    cout << "********* end of program ******** "<<endl;
    return 0;
}
