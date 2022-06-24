//Name - Anirban Banerjee Reg No - 21BPS1061

/*Perform any two arithmetic operations on ‘n’ prime numbers
using the following options
 Structures in C (5 Marks)
 Classes in CPP (5 Marks)
Get the relevant input values from the user and perform the
calculations. Write the input and output of the program in the
answer paper in addition to the program*/

#include<stdio.h>
struct Prime
{
	int prime;
};

int main()
{
	int n,sum=0,diff=0,i,j;
	printf("\nEnter number of prime numbers : ");
	scanf("%d",&n);
	struct Prime obj[n];
	for(i=0;i<n;i++)
	{
		printf("\nEnter Prime Number %d : ",i+1);
		scanf("%d",&obj[i].prime);
		sum=sum+obj[i].prime;
	}
	diff=obj[0].prime;
	for(j=1;j<n;j++)
	{
		diff=diff-obj[j].prime;
	}
	printf("\nSum of %d prime numbers = %d",n,sum);
	printf("\nDifference of %d prime numbers = %d",n,diff);
	return 0;
}
