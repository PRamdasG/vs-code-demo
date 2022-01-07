#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    for (int i = 0; argv[i] != NULL; i++)
    {
        cout << argv[i] <<'\n';
    }
    
    return 0;
}
