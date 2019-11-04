#include <stdio.h>
#define pi 3.142


float A_circle(float);		//area of circle
int C_circle(float);		//circumference of circle
int A_square(float);		//area of square
int V_sphere(float);		//volume of shpere
int A_triangle(float,float);		//area of triangle
int A_rectangle(float,float);		//area of rectangle

int main()
{
	int num,choice;
	float r,l,h;
	do
	{
		printf("\nENTER YOUR CHOICE\n\n1.Area of circle\n2.Circumference of circle\n3.Area of square");
		printf("\n4.Volume of sphere\n5.Area of triangle\n6.Area of rectangle\n\n");
		scanf("%d",&num);
		
		switch(num)
		{
			case 1:
				printf("\nEnter the Radius of circle:");
				scanf("%f",&r);
				printf("The Area of the circle is %.2f.\n\n",A_circle(r));
				break;
			
			case 2:
				printf("\nEnter the Radius of circle:");
				scanf("%f",&r);
				C_circle(r);
				break;
			
			case 3:
				printf("\nEnter the Lenght of sqaure:");
				scanf("%f",&l);
				A_square(l);
				break;
			
			case 4:
				printf("\nEnter the Radius of sphere:");
				scanf("%f",&r);
				V_sphere(r);
				break;
			
			case 5:
				printf("\nEnter the Length & Height of triangle respectively:\n");
				scanf("%f%f",&l,&h);
				A_triangle(l,h);
				break;
			
			case 6:
				printf("\nEnter the Length & breadth of rectangle respectively:\n");
				scanf("%f%f",&l,&h);
				A_rectangle(l,h);
				break;	
			
			default:
				printf("INVALID NUMBER\n\n");				
		}
		
		printf("DO YOU WANT TO CONTINUE: (1/0)\n");
		scanf("%d",&choice);
	}
	while(choice==1);
	
	return 0;
}
float A_circle(float r)
{
	float z;
	if (r>0)
	{
		z=  (pi*r*r);
		return z;
	}
	else
	{
		printf("Radius can't be Negative\n\n");
	}
}
int C_circle(float r)
{
	if (r>0)
	{
		printf("The Circumference of the circle is %.2f.\n\n",(2*pi*r));
	}
	else
	{
		printf("Radius can't be Negative\n\n");
	}
}
int A_square(float l)
{
	printf("The Area of square is %.2f.\n\n",(l*l));
}
int V_sphere(float r)
{
	if (r>0)
	{
		printf("The Volume of sphere is %.2f.\n\n",(1.3333*(pi*r*r*r))); //(4/3)=1.3333
	}
	else
	{
		printf("Radius can't be Negative\n\n");
	}
}
int A_triangle(float l,float h)
{
	printf("The Area of triangle is %.2f.\n\n",0.5*l*h);  //(1/2)=0.5
}
int A_rectangle(float l,float h)
{
	printf("The Area of rectangle is %.2f.\n\n",l*h);
}
