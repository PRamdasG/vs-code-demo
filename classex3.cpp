#include<iostream>
using namespace std;
class CAR{
    public:
        int speed(int MaxSpeed){
             return MaxSpeed;
        }
};

int main() {
    CAR obj;
    cout<<obj.speed(200)<<endl;
    return 0;
}

