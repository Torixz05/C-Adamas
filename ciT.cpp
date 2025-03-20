#include <stdio.h>
#include <math.h>

int main(){
	double A,P,r,t,CI;
	
	printf("Enter P:");
	scanf("%lf",&P);
	printf("Enter r:");
	scanf("%lf",&r);
	printf("Enter t:");
	scanf("%lf",&t);
	A=P*((pow((1+r/100),t)));
	CI=A-P;
	printf("Hence:%lf\n",A);
	printf("Therefore:%lf\n",CI);
	
	return 0;
}
