#include<stdio.h>
int main()
{
	int a;
	printf("enter the year=");
	scanf("the year %d",&a);
	if(a%400==0)
	{
		printf("it is a leap year %d",a);
	}
else	if(a%100==0)
	{
		printf("it is not a leap year %d",a);
	}
else	if(a%4==0)

	{
		printf("it is a leap year %d",a);
	}
	
	return 0;
}
