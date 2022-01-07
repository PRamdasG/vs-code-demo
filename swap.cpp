#include <iostream>
using namespace std;
void swap(int *a , int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(int argc, char const *argv[])
{
    int x  = 30 , y = 20;
    cout << "value of x before swap: "<< x <<" ,value of  y  before swap is : "<< y << endl;
    swap(x , y);
    cout << "value of x after swap: "<< x <<" ,value of  y  after swap is : "<< y << endl;
    return 0;
}
