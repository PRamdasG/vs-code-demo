//0,1,1,2,3,5,8,13
#include <iostream>
using namespace std;
int main(){
    int num,first=0,next,second=1;
    cout << "Enter the value of fibonacci series: "<<endl;
    cin >> num;
    for (int i = 0; i <= num; i++){
        cout << first << endl;
        next = first + second;
        first = second;
        second = next;

    }

}