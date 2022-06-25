#include <iostream>
using namespace std;
template <class T>
class calculator
{
	public:
		T num1,num2;
		calculator(T n1,T n2)
		{
			num1=n1;
			num2=n2;
		}
		T add()
		{
			return (num1+num2);
		}
		T sub()
		{
			return (num1-num2);
		}
		T mul()
		{
			return (num1*num2);
		}
		T div()
		{
			return (num1/num2);
		}
		void display()
		{
			cout<<"Number 1= "<<num1<<"\n";
			cout<<"Number 2= "<<num2<<"\n";
			cout<<"Addition = "<<add()<<"\n";
			cout<<"Substraction = "<<sub()<<"\n";
			cout<<"Multiplication = "<<mul()<<"\n";
			cout<<"Division = "<<div()<<"\n";
		}
		
};
int main()
{
	calculator<int> ob1(20,30);
	cout<<"For integer calculation: "<<"\n";
	ob1.display();
	calculator<double> ob2(90.5,10.1);
	cout<<"For double calculation: "<<"\n";
	ob2.display();
}
