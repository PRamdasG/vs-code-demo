#include <iostream>
using namespace std;
class Car{
    public:
        string brand;
        string model;
        Car(string x, string y);
};

Car::Car(string x,string y){
    brand=x;
    model=y;
}

int main()
{
    Car obj1("BMW","X15LK"),obj2("AUDI","C5E56");
    cout<<obj1.brand<<" "<<obj1.model<<endl;
    cout<<obj2.brand<<" "<<obj2.model<<endl;

    return 0;
}
