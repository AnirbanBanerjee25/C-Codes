//Name - Anirban Banerjee Reg No - 21BPS1061

/*Perform any two arithmetic operations on ‘n’ negative numbers
using the following options
? Structures in C (5 Marks)
? Classes in CPP (5 Marks)
Get the relevant input values from the user and perform the
calculations. Write the input and output of the program in the
answer paper in addition to the program*/

#include<stdio.h>
struct Negnum
{
	int num;
};

int main()
{
	int n,sum=0,prod=1,i;
	printf("\nEnter number of negative numbers : ");
	scanf("%d",&n);
	struct Negnum obj[n];
	for(i=0;i<n;i++)
	{
		printf("\nEnter Negative Number %d : ",i+1);
		scanf("%d",&obj[i].num);
		sum=sum+obj[i].num;
		prod=prod*obj[i].num;
	}
	printf("\nSum of %d negative numbers :- %d",n,sum);
	printf("\nProduct of %d negative numbers :- %d",n,prod);
	return 0;
}
