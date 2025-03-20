#include <stdio.h>
int main(){
	
	int array[]={1,2,3,4,5};
    int n= sizeof(array)/sizeof(array[0]);
    int i;
    printf("Original array:");
    for(i=1;i<n;i++) {
    	printf("%d ",array[i]);
	}
	printf("\n Reversed array:");
	for(i=n-1;i>=0;i--) {
		printf("%d ",array[i]);
	}
	return 0;
}
