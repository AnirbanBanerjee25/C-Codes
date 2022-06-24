//Name - Anirban Banerjee Reg No - 21BPS1061

/*Demonstrate the following cases using CPP program for the
application of calculating the cost of purchase in a multi storey
provision store.
Cost of purchase = cost of purchase in floor 1 + cost of purchase
in floor 2 + cost of purchase in floor 3.
Define various classes with the item names as data members and
cost calculation as member function for various floors.
? Access the public data members and functions in the
derived class
? Access the private data members and functions in the
derived class
Get the relevant input values from the user and perform the
calculations. Write the input and output of the program in the
answer paper in addition to the program*/

#include <iostream>
using namespace std;
class A
{
	public:
		int tot1=0,tot2=0,tot3=0;
	public:
		int total1(void)
		{
			int n,i,k;
			cout<<"Enter number of products purchased in floor 1"<<"\n";
			cin>>n;
			for(i=1;i<=n;i++)
			{
				cout<<"Enter price of product "<<"\n";
				cin>>k;
				tot1=tot1+k;
				k=0;
			}
			return (tot1);
		}
		int total2(void)
		{
			int n,i,k;
			cout<<"Enter number of products purchased in floor 2"<<"\n";
			cin>>n;
			for(i=1;i<=n;i++)
			{
				cout<<"Enter price of product "<<"\n";
				cin>>k;
				tot2=tot2+k;
				k=0;
			}
			return (tot2);
		}
		int total3(void)
		{
			int n,i,k;
			cout<<"Enter number of products purchased in floor 3"<<"\n";
			cin>>n;
			for(i=1;i<=n;i++)
			{
				cout<<"Enter price of product "<<"\n";
				cin>>k;
				tot3=tot3+k;
				k=0;
			}
			return (tot3);
		}
};
class B:public A
{
	public:
		int total;
		int cost(void)
		{
			total= tot1 + tot2 + tot3;
			cout<<"Total cost = "<<total;
		}
};
int main()
{
	B obj;
	obj.total1();
	obj.total2();
	obj.total3();
	obj.cost();
	return 0;	
}
