#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=3;i++)
	{
		for(j=0;j<3-i;j++)
		printf(" ");
		for(k=0;k<i;k++)
		printf("* ");
		printf("\n");
	}
	for(i=2;i>=1;i--){
		for (j=0;j<3-i;j++)
		printf(" ");
		for(k=0;k<i;k++)
		printf("* ");
		printf("\n");
	}
	return 0;
	
}
