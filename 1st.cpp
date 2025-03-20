#include<stdio.h>
int main ()
{
    int i,j;
    for (i=4;i>=1;i--)
    {
    	for (j=4;j>=5-i;j--){
    		printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
