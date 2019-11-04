//Write a c program to reverse a string but without using string.h header file.

#include<stdio.h>

int main()
{
	char str[30];
	int i,count=0;
	printf("Enter A String: ");
	gets (str);
	
	for(i=0;str[i]!='\0';i++)
	{
		count++;
	}
	printf("\nReverse Of String: ");
	for(i=count-1;str[i]!=0;i--)
	{
		printf("%c",str[i]);
	}
}
