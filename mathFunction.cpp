#include <iostream>
#include <cmath>
using namespace std;
float inRadian(float degrees){
    return (degrees *  3.14159) / 180;
}
int main(int argc, char const *argv[])
{
    float degrees;
    float inRadian(float );
    cout << "Enter the value in degrees: ";
    cin >> degrees;
    degrees = inRadian(degrees);
    cout << "sin(" << degrees <<") = "<< sin (degrees);
    return 0 ;
}
