#include <iostream>
using namespace std;
class sample{
    public:
        int count = 0;
        sample(){
            count++ ;
            cout << "The constructor is called here:  " <<count<< endl;
        }
        ~sample(){
            count-- ;
            cout << "This is the destructor:  " <<count<<endl;
        }
};
int main(int argc, char const *argv[])
{
    sample obj1,obj2;
    {
        cout << " lets call more objs "<<endl;
        sample obj3 , obj4;
    }
    return 0;
}
