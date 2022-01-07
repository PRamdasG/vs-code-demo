#include <iostream>
#include <string>
using namespace std;
class Car{
    private:
        string name;
    public:
        int number;
        int mileage;
        void getName();
        void display(){
            cout << "The name of the car is : "<< name<< endl;
        }    
};
void Car :: getName(){
    cout << "enter the name of car: ";
    cin >> name;
} 
class BMW : public Car{
    public:
        int getNum();
        void displayNum(){
            cout << "The number of the car is : "<< number <<endl;
            cout << "The mileage of the car is : "<< mileage;
        }
};
int BMW :: getNum(){
    cout << "enter car number: ";
    cin >> number;
    cout << "enter the mileage of car:  ";
    cin >> mileage;
    return number;
    return mileage;
}
int main(int argc, char const *argv[])
{
    Car obj1;
    BMW obj2;
    obj1.getName();
    obj2.getNum();
    obj1.display();
    obj2.displayNum();
    return 0;
}
