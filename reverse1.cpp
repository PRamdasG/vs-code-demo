#include <iostream>
using namespace std;
#define MAXLEN 80
int main(int argc, char const *argv[])
{
    char line[MAXLEN], *p;
    cout << "enter the word: " << " ";
    for (p = line; p < line + MAXLEN && cin.get(*p) && *p != '\n'; p++);
    while (--p >= line)
    {
        cout << *p;
    }
    cout << endl;
    return 0;
}
