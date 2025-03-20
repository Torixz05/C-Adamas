#include<stdio.h>
int main()
{
int a,b,c=0;
printf("Enter a Number:");
scanf("%d",&a);
b=a;
while (a>0)
{
	c=c*10+a%10;
	a/=10;
}
if(b==c)
printf("The Number is Palindromic");
else 
printf("The Number is not palindromic");

return 0;
}
