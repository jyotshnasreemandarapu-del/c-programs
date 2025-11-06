/*write a c program to find area of rectanle*/

#include<stdio.h>
int main()
{
	float length,breadth,area;
	
	printf("Enter length");
	scanf("%f",&length);
	
	printf("enter breadth");
	scanf("%f",&breadth);
	
	area = length*breadth;
	printf("The area of rectangle is %f",area);
	
	
}