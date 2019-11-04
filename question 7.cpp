//Split number into digits in c programming.
#include <stdio.h>

int main()
{
	int number,length=0,rem[20],i=0;
	
	printf("ENTER A NUMBER: ");
	scanf("%d",&number);
	
	while(number!=0)
	{
		rem[i]=number%10;
		number/=10;
		length++;
		i++;
	}
	printf("split number: ");
	for(i=length-1;i>=0;i--)
	{
		printf("%d ",rem[i]);
	}
	return 0;
}
