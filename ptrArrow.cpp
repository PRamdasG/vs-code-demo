#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    void getText()
    {
        cout << "The real part of number is: " << real << endl;
        cout << "The imag part of number is: " << imag << endl;
    }
    void setText(int a, int b)
    {
        real = a;
        imag = b;
    }
};
//we've just created a class now lets work on our main function.
int main(int argc, char const *argv[])
{
    //Complex C1;
    //Complex *ptr = &C1;
    //(*ptr).setText(23 ,90);
    //(*ptr).getText();

    //this code  also works now lets try arrow operator.
    //Complex *ptr = new Complex;
    //ptr->setText(23,89);
    //ptr->getText();

    //array is intialised with the same.
    Complex *ptr = new Complex[3];
    ptr[1].setText(23, 4);
    ptr[1].getText();
    ptr->setText(23, 89);
    ptr->getText();
    return 0;
}
