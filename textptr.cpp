#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "Demonstrating arrays of char "<< "and pointers to char.\n"<< endl;
    char text[] ="Good Morning ";
    char name[] ="Bill";
    const char *ptr = "Hello ";
    cout << ptr << name << '\n'<< text << endl;
    cout << "The Text " << text << "starts with the address " << (void *)text <<endl;
    cout << text + 5 << endl;
    ptr = name;
    cout << "This is the "<< *ptr << " of "<< ptr << endl;
    ptr = "K";
    cout << "Bill can not "<< ptr << "!!\n" <<endl;
    return 0;
}
