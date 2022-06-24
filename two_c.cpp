//Name- Anirban Banerjee Reg No- 21BPS1061

/*Demonstrate the following cases using a CPP program for the

Page 3 of 3

application of calculating the number of working days in a
university.
Number of working days = number days in the year – number of
govt announced leave days –number of university announced
leave days – number of unexpected holidays.
Define various classes for various employees and perform the
calculation. Note that some class of employees should be present
on all the days.
? Access the Public data members in a second order
derived class.
? Access the private data members and functions in the
derived class
Get the relevant input values from the user and perform the
calculations. Write the input and output of the program in the
answer paper in addition to the program*/

#include <iostream>
using namespace std;
class holidays
{
	public:
		int days=365, gov_holiday, univ_holidays,unexp_holidays;
	public:
		void inp()
		{
			cout<<"Enter number of government announced leave days"<<"\n";
			cin>>gov_holiday;
			cout<<"Enter number of university announced leave days"<<"\n";
			cin>>univ_holidays;
			cout<<"Enter number of unexpected holidays "<<"\n";
			cin>>unexp_holidays;
		}
};
class leave : public holidays
{
	public:
		int total()
		{
			inp();
			int tot;
			tot= days- gov_holiday - univ_holidays - unexp_holidays;
			cout<<"Number of working days ="<<tot<<"\n";
		}
};
int main()
{
	leave obj;
	obj.total();
	return 0;
}
