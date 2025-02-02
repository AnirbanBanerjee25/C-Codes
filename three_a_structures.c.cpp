//Name - Anirban Banerjee Reg No - 21BPS1061

/*Perform any two arithmetic operations on �n� polynomials using
the following options
 Structures in C (5 Marks)
 Classes in CPP (5 Marks)
Get the relevant input values from the user and perform the
calculations. Write the input and output of the program in the
answer paper in addition to the program*/

#include<stdio.h>
struct Cal
{
	int a,b,c;
};

int main()
{
    int n,sum1=0,sum2=0,sum3=0,diff1=0,diff2=0,diff3=0;
    printf("\n Enter the number of polynomials to perform arithmetic operations :- ");
    scanf("%d",&n);
	struct Cal obj[n];
	printf("\nEnter the cofficients a,b,c in the polynomial of form ax^2+bx+c : ");
	for(int i=0;i<n;i++)
	{
		printf("\nEnter cofficient a of polynomial %d :",i+1);
		scanf("%d",&obj[i].a);
		printf("\nEnter cofficient b of polynomial %d :",i+1);
		scanf("%d",&obj[i].b);
		printf("\nEnter cofficient c of polynomial %d :",i+1);
		scanf("%d",&obj[i].c);
	}
	printf("\nPerforming Addition of %d polynomials :",n);
	for(int j=0;j<n;j++)
	{
		sum1=sum1+obj[j].a;
		sum2=sum2+obj[j].b;
		sum3=sum3+obj[j].c;
	}
	printf("\nFinal Polynomial after addition %d polynomials : (%d) x^2 + (%d) x + (%d) ",n,sum1,sum2,sum3);
	printf("\nPerforming substraction of %d polynomials :",n);
	diff1=obj[0].a;
	diff2=obj[0].b;
	diff3=obj[0].c;
	for(int k=1;k<n;k++)
	{
		diff1=diff1-obj[k].a;
		diff2=diff2-obj[k].b;
		diff3=diff3-obj[k].c;
	}
	printf("\nFinal Polynomial after Difference of %d polynomials : (%d) x^2 + (%d) x + (%d) ",n,diff1,diff2,diff3);
	return 0;
}
