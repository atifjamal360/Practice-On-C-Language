#include <stdio.h>
 
int main()
{
   int n, sum = 0, c, value;
   float avg;
 
   printf("Enter the number of integers you want to add\n");
   scanf("%d", &n);
 
   printf("Enter %d integers\n",n);
 
   for (c = 1; c <= n; c++)
   {
      scanf("%d", &value);
      sum = sum + value;
      avg=sum/n;
   }
   printf("Sum of entered integers = %d\n",sum);
   printf("avg of number = %.1f",avg);
 
   return 0;
}
