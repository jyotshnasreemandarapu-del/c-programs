/*write a c program to find area of circle*/

#include<stdio.h>
int main()
{                         
	float radius,area;
	printf("Enter the value of radius");
	scanf("%f",&radius);
	
	area = 3.14*radius*radius;
	printf("The area of circle is %f",area);
	
	
}