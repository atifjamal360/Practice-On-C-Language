#include<stdio.h>
#include<string.h>

void check(char [],int);

int main()
{
	char a[100];
	
	printf("Enter A String To Check Palindrome:\n");
	gets (a);
	
	printf("\nInput String Is:\n%s\n",a);
	
	check(a,0);
	
	return 0;
}
void check(char a[],int b)
{
	int len;
	len=strlen(a)-(b+1);
	if(a[b]==a[len])
	{
		if( b+1 == len || b == len )
		{
			printf("\n\"%s\" Is Palindrome",a);
			return;
		}
		check(a,b+1);
	}
	else
	printf("\n\"%s\" Is Not Palindrome",a);
}
