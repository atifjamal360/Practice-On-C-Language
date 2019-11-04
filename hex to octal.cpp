#include<stdio.h>

int main()
{
	char c[100];
    long long int len=0,dec=0,i,rem[100];
    
    printf("Enter Your Hexadecimal:\n");
    scanf("%s",&c);
    
	for(i=0; c[i]!='\0' ; i++)
	{
		if(c[i]>='0' && c[i]<='9')
            dec=dec*16+(c[i]-'0');
            else if(c[i]=='A' || c[i]=='a')
                dec=dec*16+(10);
            else if(c[i]=='B' || c[i]=='b')
                dec=dec*16+(11);
            else if(c[i]=='C' || c[i]=='c')
                dec=dec*16+(12);
            else if(c[i]=='D' || c[i]=='d')
                dec=dec*16+(13);
            else if(c[i]=='E' || c[i]=='e')
                dec=dec*16+(14);
            else if(c[i]=='F' || c[i]=='f')
                dec=dec*16+(15);
            else
			{
                printf("Error:Your number Is Not Valid!");
                return -1;
			}       
    }
    i=0;
    while(dec!=0)
	{
		rem[i]=dec%8;
		dec=dec/8;
		i++;
		len++;
	}
	printf("octal number is : ");
	for(i=len-1;i>=0;i--)
	{
		printf("%lld",rem[i]);
	}
    return 0;
}
