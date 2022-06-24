//Name - Anirban Banerjee Reg No - 21BPS1061

/*Demonstrate the following cases using CPP program for the
application of calculating the cost of production in an industry
Cost of production = Cost of ingredients + (cost of labour x
number of days of work) + rental cost of equipment
Define various classes for calculating the cost of production of
various items in the industry.
? Access the class data members which are defined as
private using the non – friend member functions defined
outside the class
? Access the class data members which are defined as
private using the friend member functions defined
outside the class
Get the relevant input values from the user and perform the
calculations. Write the input and output of the program in the
answer paper in addition to the program*/

#include <iostream>
using namespace std;
class cost
{
	private:
		int labour,ingredients,days,rental;
	public:
		void inp()
		{
			cout<<"Enter cost of ingredients, labour charge, number of days and rental charge"<<"\n";
			cin>>ingredients>>labour>>days>>rental;
		}
		friend void printing(cost ob);
		int get_cost(void);
};
int cost :: get_cost(void)
{
	int total;
	total = ingredients+ (labour*days) +rental;
	return (total);
};
void printing(cost ob)//Using friend function to print the various cost.
{
	cout<<"Cost of ingredients = "<<ob.ingredients<<"\n";
	cout<<"Cost of labour = "<<ob.labour<<"\n";
	cout<<"Number of days = "<<ob.days<<"\n";
	cout<<"Rental charge = "<<ob.rental<<"\n";
}
int main()
{
	int k;
	cost obj;
	obj.inp();
	k=obj.get_cost();
	printing(obj);
	cout<<"Total Cost = "<<k<<"\n";
	return 0;
}

