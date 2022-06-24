//Name - Anirban Banerjee Reg No - 21BPS1061

/*Let us assume that the VIT student is appointed as the software
engineer in a bank.
Write a CPP program to calculate the salary of following
employees using classes defined with static data members and
static member functions along with other class members.
Bank Managers : Basic Pay(BP) + DA (40% of BP) + HRA
(10% of BP) + Allowances (Rs. 1000)
Assistant Bank Managers : Basic Pay(BP) + DA (30% of BP) +
HRA (10% of BP) + Allowances (Rs. 1000)
Cashiers : Basic Pay(BP) + DA (10% of BP) + HRA (2% of BP)
+ Allowances (Rs. 1000)
Get the relevant input values from the user and perform the
calculations. Write the input and output of the program in the
answer paper in addition to the program*/

#include <iostream>
#include <conio.h>
using namespace std;
class salary
{
	public:
		static int bp;
		static int da;
		static int hra;
		static int allow;
		static int net;
	public:
		static int manager(int bp)
		{
			da=(40/100)*bp;
			hra=(10/100)*bp;
			allow=1000;
			net=bp+da+hra+allow;
			return (net);
		};
		static int assistant_manager(int bp)
		{
			da=(30/100)*bp;
			hra=(10/100)*bp;
			allow=1000;
			net=bp+da+hra+allow;
			return (net);
		};
		static int cashier(int bp)
		{
			da=(10/100)*bp;
			hra=(2/100)*bp;
			allow=1000;
			net=bp+da+hra+allow;
			return (net);
		};
		
};
int salary :: bp=0;
int salary :: da=0;
int salary :: hra=0;
int salary :: net=0;
int salary :: allow=0;
int main()
{
	salary ob;
	int ch,basic,a,b,c;
	cout<<"Enter 1 to calculate net salary of manager, 2 for net salary of assistant manager, 3 for net salary of cashier"<<"\n";
	cin>>ch;
	if (ch==1)
	{
		cout<<"Enter basic pay"<<"\n";
		cin>>basic;
		a=ob.manager(basic);
		cout<<"Net salary = "<<a;
	}
	else if (ch==2)
	{
		cout<<"Enter basic pay"<<"\n";
		cin>>basic;
		b=ob.assistant_manager(basic);
		cout<<"Net salary = "<<b;
	}
	else if (ch==3)
	{
		cout<<"Enter basic pay"<<"\n";
		cin>>basic;
		c= ob.cashier(basic);
		cout<<"Net salary = "<<c;
	}
}
