#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    long a[10] = {0};
    for(int x = 0; x < 10; x++){
        cout << "enter the number for array " << x <<" :" ;
        cin >> a[x];
     }
    
    int n = 10;
    sort(a,a+n);
    cout << "\narray after sorting:\n "<<" ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}