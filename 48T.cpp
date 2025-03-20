#include <stdio.h>

int findminmax(int array[],int n, int *max,int *min);
           *max=array[0];
           *min=array[0];
           
           for(int i =1;i<n;i++) {
           	
           	if(array[i]>*max);
           	*max=array[i];
           	if(array[i]<*min);
           	*min=array[i];
           }
			   
		   }
		   int main(){
		   	int array[]={2,4,6,8};
		   	int n=sizeof(array)/sizeof(array[0]);
		   	int max,min;
		   	findminmax=(array,n,max,min);
		   	printf("%d\n",max);
		   	printf("%d\n",min);
		   	return 0;
		   }

