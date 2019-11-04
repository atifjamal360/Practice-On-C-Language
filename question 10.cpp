//Write a c program to count the different types of characters in given string.

#include <stdio.h>

int main()
{
	int i,digit=0,space=0,character=0,vowel=0,special=0,consonant=0;
	char str[30];
	
	printf(" Enter A String: ");
	gets (str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u')
		{
			vowel++;
			character++;
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			digit++;
			character++;
		}
		else if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z')
		{
			consonant++;
			character++;
		}
		else if(str[i]==' ')
		{
			space++;
		}
		else if(str[i]>=0 && str[i]<=47 || str[i]>=58 && str[i]<=64 || str[i]>=91 && str[i]<=96 || str[i]>=123 &&str[i]<=255)
		{
			special++;
			character++;
		}
	}
	printf("\n No. Of Characters=%d",character);
	printf("\n No. Of Vowels=%d",vowel);
	printf("\n No. Of Consonant=%d",consonant);
	printf("\n No. Of Digits=%d",digit);
	printf("\n No. Of Special Characters=%d",special);
	printf("\n No. Of Space=%d",space);
	return 0;
}
