#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int num, i, *ptr,*p ,sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &num);

    ptr = (int*) calloc(num, sizeof(int));
    if(ptr == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }
    p=ptr;

    printf("Enter elements of array:\n");
    for(i = 0; i < num; ++i)
    {
        scanf("%d", ptr);
        sum += *ptr;
        ptr++;
    }
    
    printf("Print elements of array:\n");
    for(i = 0; i < num; ++i)
    {
        printf("%d\n", *p);
        p++;
    }
	printf("Sum = %d", sum);
    //free(ptr);
    getch();
    return 0;
}
