#include <stdio.h>
int main(){
	
	char ch;
	printf("Enter:");
	scanf("%d",&ch);
	if(ch=='H')
	{
		printf("Head",ch);
	}
	else
	{
		printf("Tail",ch);
	}
	return 0;
}
