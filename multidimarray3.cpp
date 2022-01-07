#include <iostream>
using namespace std;
int main(){
    char x[2][20]={"armstrong , number","booleon , data"};
    int y[2][5]={{1,2,3,4,5},{0,9,7,7,6}};
    for (int i = 0; i < 2; i++)
    {
        cout << "\n names: " << x[i];
        cout << "\nitems number: ";
        for (int j = 0; j < 5; j++)
        {
            cout << y[i] [j]<<" ";
        }
                
    }
    

}
