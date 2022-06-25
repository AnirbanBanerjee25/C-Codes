#include <stdio.h>
#include <string.h>
typedef struct
{
	char name[50];
	int transaction[10];
	int discount[10];
	int total;
	int totaldis;
	int avg;
}customer;
int main()
{
	customer s[10];
	int i,j;
	printf("Enter details\n");
	for(i=0;i<2;i++)
	{
		printf("Enter name\n");
		scanf("%s",&s[i].name);
		printf("Enter transaction amount\n");
		for(j=0;j<2;j++)
		{
			scanf("%d",&s[i].transaction[j]);
			s[i].total=s[i].total+s[i].transaction[j];
			if(s[i].transaction[j]<500)
			{
				s[i].discount[j]=5;
			}
			if(s[i].transaction[j]>=500 && s[i].transaction[j]<=999)
			{
				s[i].discount[j]=10;
			}
			if(s[i].transaction[j]>=1000 && s[i].transaction[j]<1999)
			{
				s[i].discount[j]=15;
			}
			else
			{
				s[i].discount[j]=20;
			}
			s[i].totaldis=s[i].totaldis+s[i].discount[j];
		}
		s[i].avg=(s[i].total-s[i].totaldis)/10;
		
	}
	for(i=0;i<2;i++)
	{
		printf("Name-%s Total Transaction-%d Total discount-%d Average-%d",s[i].name,s[i].transaction,s[i].totaldis,s[i].avg);
		
	}
	
	
}
