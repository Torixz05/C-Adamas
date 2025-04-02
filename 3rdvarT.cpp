#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("after swapping:");
    printf("%d\t",b);
    printf("%d\t",a);
    return 0;
     }
