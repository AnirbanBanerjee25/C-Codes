//Anirban Banerjee 21BPS1061
#include <stdio.h>
#include <string.h>
#include<ctype.h>
void reverse_name(char name[],int len)
{
    int pos=0;
    int i=0;
    while(!isspace(name[i]))
    {
        pos++;
        i++;
    }
    
    for(i=pos;i<len;i++)
    {
        printf("%c",name[i]);
    }
    printf(" ");
    for(i=0;i<pos;i++)
    {
        printf("%c",name[i]);
    }
    
}
int main()
{
	char name[50];
	printf("Enter name\n");
	fgets(name,sizeof(name),stdin);
	int l;
	l=strlen(name);
	reverse_name(name,l);
}
