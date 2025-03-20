#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c) { 
	
	printf("the maximum number%d\n",a);
}
else if(b>a&&b>c)
{ 
		printf("the maximum number%d\n",b);
} 
else
{
	printf("the maximum number%d\n",c);
}
return 0;
}
