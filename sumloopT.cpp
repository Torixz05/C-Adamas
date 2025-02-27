#include <stdio.h>

int main(){
	
	int num,sum=0,remainder;
	printf("Enter the numbers:");
	scanf("%d",&num);
	
	while(num!=0)
	{
	
	remainder= num%10;
	sum+=remainder;
	num/=10;
}

	printf("The sum is %d\n",sum);
	return 0;
}
