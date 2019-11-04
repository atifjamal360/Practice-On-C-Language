//Write a c program to convert the string from upper case to lower case and lower case to upper case

#include<stdio.h>

int main()
{
	int i;
	char str[30];
	
	printf("Enter A String: ");
	gets (str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
			str[i]=str[i]+32;
		}
		else if(str[i]>=97 && str[i]<=122)
		{
			str[i]=str[i]-32;
		}	
	}
	printf("\nConvert The String From Upper Case To Lower Case And Lower Case To Upper Case.\n\n");
	for(i=0;str[i]!='\0';i++)
	{
		printf("%c",str[i]);
	}
}
