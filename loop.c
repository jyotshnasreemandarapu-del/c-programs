/*write a program to print the reverse of the given number by loop*/

#include<stdio.h>
int main()
{
	int num,rev=0,rem;
	printf("enter any integer number");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	} 
	printf("\nreverse of the given number is %d",rev);