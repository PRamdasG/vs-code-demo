#include <iostream>
using namespace std;
int main(int argc, char const *argv[],char const *env[])
{
    for (int i = 0; env[i] != NULL; i++)
    {
        cout << "enviroment: "<<env[i]<<"\n";
    }
    
    return 0;
}
