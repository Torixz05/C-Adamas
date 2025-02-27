#include <stdio.h>

int main(){
	
	int  num,reversenum=0,remainder;
	
	printf("Enter the number:");
	scanf("%d",&num);
	while(num!=0)
	{
		remainder=num%10;
		reversenum=reversenum*10+remainder;
		num/=10;
	}
	printf("Reverse number = %d",reversenum);

return 0;
}
