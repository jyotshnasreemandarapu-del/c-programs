#include<stdio.h>
int main()
{
	int a,b,c,biggest;
	//input three numbers
	printf("Enter the three numbers");
	scanf("%d%d%d",&a,&b,&c);
	
	//find the biggest using ternary operator
	biggest=(a>b)?((a>c)?a:c):((b>c)?b:c);
	
	//display result
	printf("The biggest number is:%d\n",biggest);
	return 0;
}