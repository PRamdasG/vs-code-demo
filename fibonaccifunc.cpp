//0,1,1,2,3,5,8,13,21
#include <iostream>

using namespace std;

int fibo( int next, int term1, int term2);

int main(){
    cout << "fibonacci series" <<fibo(9,0,1)<<endl;
}

int fibo( int next, int term1, int term2){
    cout << term1 <<" ";
    if (next == 0)
    {
        return term1 + term2;
    }
    else
    {
        fibo(next-1,term2,term1+term2);
    }
}