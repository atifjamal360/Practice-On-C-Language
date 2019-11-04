#include<stdio.h>

int main()
{
	int i=0,j=0;
	char str1[100],str2[100],str3[100];

	puts ("Enter first string");
	gets (str1);

	puts ("Enter second string");
	gets (str2);

	printf("Before concatenation the strings are\n");
	puts (str1);
	puts (str2);

	while(str1[j]!='\0')
	{
		str3[i++]=str1[j++];
	}
	j=0;
	while(str2[j]!='\0')
	{
	str3[i++]=str2[j++];
	}
	str3[i]='\0';

	printf("After concatenation the strings are\n");
	puts(str3);

	return 0;
}
