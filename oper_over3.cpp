#include <iostream>
using namespace std;
class Fraction{
	private:
		double num;
		double deno;
	public:
		Fraction(int n , int d){
			num = n;
			deno = d;
		}
		Fraction(){
			num = 0;
			deno = 0;
		}
		Fraction operator * (Fraction & b ){
			Fraction res;
			res.deno = deno * b.deno;
			res.num = num * b.num;
			return res;
		}
		void print(){
			cout << "result ("<< num <<"," << deno <<")"; 
		}
};
int main(int argc, char const *argv[])
{
	Fraction ob1(5,6),ob2(7,4),ob3;
	ob3 = ob1 * ob2;
	ob3.print();
	return 0;
}
