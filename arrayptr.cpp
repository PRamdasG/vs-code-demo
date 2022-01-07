#include <iostream>
#include <string>
using namespace std;
const int MAX = 4;
int main(int argc, char const *argv[])
{
    const char *array[MAX] = {"prad","rish","sil","vrun"};
    cout << "location of the array elements are : " <<endl;
    for (int i = 1; i <= MAX; i++ ){
        cout << "location of [" << i << "]=";
        cout << (array+i) << endl;
    }
    return 0;
}
