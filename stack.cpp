#include <iostream>
#include <stack>
using namespace std;
int main(int argc, char const *argv[])
{
    stack <int > myStack;
    myStack.push(3);
    myStack.push(33);
    myStack.push(333);
    myStack.push(3333);
    myStack.push(33333);
    while (!myStack.empty())
    {
        cout << "\t" << myStack.top();
        myStack.pop();
    }
    cout << endl;
    
    return 0;
}

