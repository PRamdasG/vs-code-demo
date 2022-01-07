#include <iostream>
using namespace std;
class box{
    private:
        int real;
        int img;
    public:
    box(int r = 0, int i = 0){
        real = r;
        img = i;
    }
    box operator + (box obj){
        box res;
        res.real = real + obj.real;
        res.img = img + obj.img;
        return res;
    }
     void print() { 
        cout << real << " + i" << img << endl;
    } 
};
int main(int argc, char const *argv[])
{
    box obj1(5,6),obj2(3,5);
    box obj3 = obj1 + obj2;
    obj3.print();   
    return 0;
}
