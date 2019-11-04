#include<stdio.h>
#include<conio.h>

void reverse();
int main()
{
	reverse();
	return 0;
}
void reverse()
{
	char a;
	a=getche();
	if(a!='\r')
	{
		reverse ();
	}
	printf("%c",a);
}
