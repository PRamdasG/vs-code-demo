#include <iostream>
using namespace std;
class integer{
    private:
        int a;
    public:
        integer(int i){
            a = i;
        }
        integer(){
            a = 0;
        }
        integer operator++(){
            integer res;
            res.a = ++a;
            return res;
        }
        void print(){
            cout << "the value of the result is : " << a <<endl;
        }
};
int main(int argc, char const *argv[])
{
    integer obj1(50);
    cout << "before increment ";
    obj1.print();
    cout << "after increment ";
    integer obj2 = ++obj1;
    obj2.print();
    return 0;
}
