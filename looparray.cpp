#include <iostream>
using namespace std;
int main() {
    string qual[7]={"name","is","prad","star"};
    qual[5]="kids";
    qual[6]="mans";
    for(int i = 0; i < 8; i++){
        cout<<i<<":"<<qual[i]<<'\n';
    }
    return 0;
}
