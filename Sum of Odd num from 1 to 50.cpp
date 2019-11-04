//Sum of Odd num from 1 to 50

#include<stdio.h>
#include<conio.h>
int main()
{
        int i,sum=0,n=50;
        
        printf("\n\n THE SERIES IS UNDER : \n\n\n");
        i=1;
        do
        {
            sum=sum+i;
            if(i==1)
                printf("%d",i);
            else
                printf("+ %d",i);
            i=i+2;
        }while(i<=n);
        printf("\n\n\n THE SUMMATION OF ODD NUMBERS IS %d",sum);
    
}

