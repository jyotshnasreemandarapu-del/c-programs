/*write a c progranm to evaluate the following expression a/b*c-b+a*d/3  j=(i++)+(++i) */
#include<stdio.h>
int main()
{
	float a,b,c,d,result,i,j;
	printf("enter values of a,b,c,d");
	scanf("%f%f%f%f",&a,&b,&c,&d);
	result=a/b*c-b+a*d/3;
	printf("the result is %f",result);
	printf("\n enter the value of i");
	scanf("\n%f",&i);
	j=(i++)+(++i);
	printf("The value of j is %f",j);
}