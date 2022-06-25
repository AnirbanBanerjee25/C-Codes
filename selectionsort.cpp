#include <iostream>
using namespace std;
template <class X> void selectionsort(X *p,int size)
{
	X t;
	int j;
	for(int i=0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(*(p+i)>*(p+j))
			{
				t=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=t;
			}
		}
	}
};
int main()
{
	int iarray[5]={99,49,77,23,11};
	double darray[5]={1.3,23.3,99.3,0.3,5.3};
	cout<<"Sorted iarray is:"<<"\n";
	selectionsort(iarray,5);
	int i;
	for(i=0;i<5;i++)
	{
		cout<<iarray[i]<<"\n";
	}
	cout<<"Sorted darray is "<<"\n";
	selectionsort(darray,5);
	for(i=0;i<5;i++)
	{
		cout<<darray[i]<<"\n";
	}
	return 0;
}
