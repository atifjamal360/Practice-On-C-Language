
//Sum of 1st and 2nd largest number 

#include <stdio.h>
#define MAX 4
 
int main(void)
{
    int array[MAX], i, largest1, largest2, temp;
 
    printf("Enter %d integer numbers \n", MAX);
    for (i = 0; i < MAX; i++)
    {
        scanf("%d", &array[i]);
    }
 
    printf("Input interger are \n");
    for (i = 0; i < MAX; i++)
    {
      printf("\t%d", array[i]);
    }
    
	printf("\n");
    
    largest1 = array[0];
    
    largest2 = array[1];
    
	if (largest1 < largest2)
    {
        temp = largest1;
    
	    largest1 = largest2;
    
	    largest2 = temp;
    }
    
	for (i = 2; i < 4;	i++)
    {
        if (array[i] >= largest1)
        {
            largest2 = largest1;
    
	        largest1 = array[i];
        }
        else if (array[i] > largest2)
        {
            largest2 = array[i];
        }
    }
    
	printf("%d is the first largest \n", largest1);
    
	printf("%d is the second largest \n", largest2);
    
	printf("\nAverage of %d and %d = %d \n", largest1, largest2,(largest1 + largest2) / 2);

return 0;
}
