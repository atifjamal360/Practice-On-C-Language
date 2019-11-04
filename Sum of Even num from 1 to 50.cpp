//Sum of even num from 1 to 50

#include<stdio.h>
#include<conio.h>
int main()
{
        int i,sum=0,n=11;
        
        printf("\n\n THE SERIES IS UNDER : \n\n\n");
        i=0;
        do
        {
            sum=sum+i;
            if(i==0)
                printf("%d",i);
            else
                printf("+ %d",i);
            i=i+2;
        }while(i<=n);
        printf("\n\n\n THE SUMMATION OF EVEN NUMBERS IS %d",sum);
    
}

