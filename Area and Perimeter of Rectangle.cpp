#include <stdio.h>

int main ()
{
	
	float length, breadth, radius;
	
	printf("Lenght of rectangle: ");
	scanf("%f", &length);
	
	printf("Breadth of rectangle: ");
	scanf("%f", &breadth);
	
	printf("Radius of circle: ");
	scanf("%f", &radius);
	
	float area_r, perimeter, area_c, circumference, pie;
	
	pie = 3.142;
	
	area_r = length * breadth;
	
	printf("Area of rectangle: %f\n", area_r);
	
	perimeter = 2 * (length + breadth);
	
	printf("Perimeter of rectangle: %f\n", perimeter);
	
	return 0;
	
}
