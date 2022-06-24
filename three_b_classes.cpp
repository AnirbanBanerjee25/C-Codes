//Name - Anirban Banerjee Reg No - 21BPS1061

/*Perform any two arithmetic operations on ‘n’ prime numbers
using the following options
 Structures in C (5 Marks)
 Classes in CPP (5 Marks)
Get the relevant input values from the user and perform the
calculations. Write the input and output of the program in the
answer paper in addition to the program*/

#include <iostream>
using namespace std;
class prime
{
	public:
		int p[10];
	public:
		void inp()
		{
			cout<<"Enter 10 prime numbers "<<"\n";
			int i;
			for(i=0;i<10;i++)
			{
				cin>>p[i];
			}
		}
		void add()
		{
			int add;
			int i;
			for(i=0;i<10;i++)
			{
				add=add+p[i];
			}
			cout<<"Addition of n prime numbers is "<<add<<"\n";
		}
		void mul()
		{
			int mul=1;
			int i;
			for(i=0;i<10;i++)
			{
				mul=mul*p[i];
			}
			cout<<"Multiplication of n prime numbers is : "<<mul<<"\n";
		}
};
int main()
{
	prime obj;
	obj.inp();
	obj.add();
	obj.mul();
}
