#include <iostream>
using namespace std;
 int main()
 {   
     int sum =0;
     int exe[5];
     for(int i = 0; i < 5; i++){
         cout << "enter the number for array " << i <<" :" ;
         cin >> exe[i];
     }
     for(int n=0; n < 5; n++){
         cout << exe[n] << " ";
     }
    return 0;
 }
 