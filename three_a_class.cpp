//Name - Anirban Banerjee Reg No - 21BPS1061

/*Perform any two arithmetic operations on ‘n’ polynomials using
the following options
 Structures in C (5 Marks)
 Classes in CPP (5 Marks)
Get the relevant input values from the user and perform the
calculations. Write the input and output of the program in the
answer paper in addition to the program*/

#include <iostream>
using namespace std;
class polynomial
{
	public:
		int a1,a2,b1,b2,c1,c2;
	public:
		void inp()
		{
			cout<<"Enter coefficients of first polynomial in the format ax^2+bx+c"<<"\n";
			cin>>a1>>b1>>c1;
			cout<<"Enter coefficients of second polynomial in the format ax^2+bx+c"<<"\n";
			cin>>a2>>b2>>c2;
		}
		void add()
		{
			cout<<"Addition of the two polynomials is :"<<"\n";
			cout<<a1+a2<<"x^2"<<"+"<<b1+b2<<"x"<<"+"<<c1+c2<<"\n";
		}
		void sub()
		{
			cout<<"Substraction of the two polynomials is :"<<"\n";
			cout<<a1-a2<<"x^2"<<"+"<<b1-b2<<"x"<<"+"<<c1-c2<<"\n";
		}
};
int main()
{
	polynomial obj;
	obj.inp();
	obj.add();
	obj.sub();
	return 0;
}
