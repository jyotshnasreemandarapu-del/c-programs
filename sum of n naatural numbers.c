/*write a c program to print sum of n natural numbers*/
#include<stdio.h>
int main()
{
	int num, sum=0, i;
	printf("enter any number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		sum=sum+i;
	}
	printf("The sum is %d",sum);
}