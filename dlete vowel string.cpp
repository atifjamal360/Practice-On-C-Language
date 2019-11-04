#include<stdio.h>

int main()
{
	int k,j,i,count=0;
	char a[30],b[30],c[30];
	
	printf("Enter A String: ");
	gets (a);

	k=0;
	for(int i=0;a[i]!='\0';i++)
	{
		if(a[i]!='A'&& a[i]!='a'&& a[i]!='e' && a[i]!='E' && a[i]!='I' && a[i]!='i' && a[i]!='O' && a[i]!='o' && a[i]!='U' && a[i]!='u')
		{
			c[k]=a[i];
			k++;
		}
	}
	
	c[k]='\0';
	
	printf("\nDlete Vowels From String \"%s\" is :",a);
	for(k=0;c[k]!='\0';k++)
	printf("%c",c[k]);
}
