/*write a c programe to read and display to perform addition of two integer and two
real numbers*/

#include<stdio.h>
int main()
{
 int num1,num2,add,diff;
 float n1,n2,sum,sub;
 
 add=num1+num2;
 diff=num1-num2;
 
 printf("Integer adittion is %d\n",add);
 printf("Integer subtraction is %d\n",diff); 

 printf("\nEnter any two real numbers"); 
 scanf("%f%f",&n1,&n2);
 
 sum=n1+n2;
 sub=n1-n2;
 
 printf("Real numbers addition is %f\n",sum);
 printf("Real numbers subtraction is %f\n",sub);
 }