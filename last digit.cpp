#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	printf("Enter The Number: ");
	scanf("%d",&a);
	b=a-(a/10)*10;
	printf("The last number is: %d\n",b);
	return 0;
}
