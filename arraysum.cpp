#include <iostream>
using namespace std;
int main(){
    int array[5]={1,2,3,4,5};
    int sum=0;
    for (int n : array)
    {
        cout << n <<" \t";
        sum = sum + n;
    }
    cout <<'\n' << sum << endl;
    return 0;
    
}