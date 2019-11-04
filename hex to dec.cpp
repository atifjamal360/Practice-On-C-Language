#include<stdio.h>

int main()
{
	char c[100];
    int n=0,i;
    
    printf("Enter Your Hexadecimal:\n");
    scanf("%s",&c);
    
	for(i=0; c[i]!='\0' ; i++)
	{
		if(c[i]>='0' && c[i]<='9')
            n=n*16+(c[i]-'0');
            else if(c[i]=='A' || c[i]=='a')
                n=n*16+(10);
            else if(c[i]=='B' || c[i]=='b')
                n=n*16+(11);
            else if(c[i]=='C' || c[i]=='c')
                n=n*16+(12);
            else if(c[i]=='D' || c[i]=='d')
                n=n*16+(13);
            else if(c[i]=='E' || c[i]=='e')
                n=n*16+(14);
            else if(c[i]=='F' || c[i]=='f')
                n=n*16+(15);
            else
			{
                printf("Error:Your number Is Not Valid!");
                return -1;
			}       
    }
    printf("%d",n);
    return 0;
}

