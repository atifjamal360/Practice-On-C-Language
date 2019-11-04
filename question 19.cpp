#include<stdio.h>
#include<string.h>

int main()
{
	int j,z,y,i,k=0;
	char a[10],b[10],*ptra,*ptrb;
	
	printf("Enter 1st String:\n");
	gets (a);
	printf("Enter 2nd String:\n");
	gets(b);
	
	y=strlen(b);
	i=strlen(a);
	
	z=i+y;
	
	ptra=a;
	ptrb=b;
	
	for(j=0;j<y;j++)
	{
		*(ptra+i)=*(ptrb+j);
		i++;
		//k++;
		//ptrb++;
	}
	printf("\nConcatenate Of 1st & 2nd String:\n");
	puts (a);
	
	return 0;
}
