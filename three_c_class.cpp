//Name - Anirban Banerjee Reg No - 21BPS1061

/*Perform any two arithmetic operations on ‘n’ negative numbers
using the following options
 Structures in C (5 Marks)
 Classes in CPP (5 Marks)
Get the relevant input values from the user and perform the
calculations. Write the input and output of the program in the
answer paper in addition to the program*/

#include <iostream>
using namespace std;
class negative
{
	public:
		int a[10];
	public:
		void inp()
		{
			int i;
			cout<<"Enter negative numbers "<<"\n";
			for(i=0;i<10;i++)
			{
				cin>>a[i];
			}
		}
		void add()
		{
			int total=0,i;
			for(i=0;i<10;i++)
			{
				total=total+a[i];
			}
			cout<<"Sum of n negative numbers is = "<<total<<"\n";
		}
		void mul()
		{
			int multiply=1,i;
			for(i=0;i<10;i++)
			{
				multiply=multiply*a[i];
			}
			cout<<"Multiplication of n negative numbers is = "<<multiply<<"\n";
		}
		
};
int main()
{
	negative obj;
	obj.inp();
	obj.add();
	obj.mul();
	return 0;
}
