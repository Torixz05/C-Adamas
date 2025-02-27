#include <stdio.h>

int main(){
	
	int num,count=0;
	printf("Enter the numbers:");
	scanf("%d",&num);
	if(num==0)
	{
		count =1;
	}
	else
	{
		while(num!=0)
		{
		
		num/=10;
		count ++;
	}
}
	printf("There are %d\n numbers",count);
	
return 0;
}
