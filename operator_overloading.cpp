//Anirban Banerjee
//Operator Overloading
#include <iostream>
using namespace std;
class complex
{
	public:
		double real,img;
		complex()
		{
			real=0;
			img=0;
		}
		complex(double re,double im)
		{
			real=re;
			img=im;
		}
		complex operator+(complex x)
		{
			complex T;
			T.real=real+x.real;
			T.img=img+x.img;
			return T;
		}
		complex operator-(complex x)
		{
			complex T;
			T.real=real-x.real;
			T.img=img-x.img;
			return T;
		}
		void print()
		{
			cout<<real<<"+ (i)"<<img<<"\n";
		}
		
		
};
int main()
{
	complex ob1(1.5,1.3);
	complex ob2(2.5,2.3);
	complex c,d;
	c=ob1+ob2;
	c.print();
	d=ob1-ob2;
	d.print();
	return 0;
}
