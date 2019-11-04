#include<stdio.h>

int main (){

	int i,num[8]{-1,6,102,240,65,42,39,27};
	
	printf("\t\t <==Reversing of an array==>\n\n");
	
	printf("Number is in original form : ");

	for (i=0;i<=7;i++){
		printf("%d ",num[i]);
	}

	printf("\n\nNumber is in reverse form : ");

	for (i=7;i>=0;i--){
		printf("%d ",num[i]);
	}

	return 0;

}
