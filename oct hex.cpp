#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	long int rem[10],len=0,decimal=0,i=0,octal,check,oct=0;
	
	printf("Enter the octal number: ");
	scanf("%ld",&octal);
	
	check=octal;
	
	while(check!=0){
    	oct=check%10;
    	if(oct>7)
    	{
    		printf("%d is not octal number",oct);
    		return 0;
		}
		else
		{
			check=check/10;
			i++;
		}
	}
	i=0;
	oct=0;
	while(octal!=0){
    	oct=octal % 10;
         decimal = decimal + oct * pow(8,i);
         i++;
         octal = octal/10;
    }
    
    i=0;
    while(decimal!=0)
	{
		rem[i]=decimal%16;
		decimal=decimal/16;
		i++;
		len++;
	}
	printf("Hexa-decimal number is : ");
	for(i=len-1;i>=0;i--)
	{
		switch(rem[i])
		{
			case 10:
				printf("A");
				break;
			
			case 11:
				printf("B");
				break;
				
			case 12:
				printf("C");
				break;
				
			case 13:
				printf("D");
				break;
				
			case 14:
				printf("E");
				break;
				
			case 15:
				printf("F");
				break;
				
			default:
				printf("%ld",rem[i]);
		}
		
	}
	return 0;
}
