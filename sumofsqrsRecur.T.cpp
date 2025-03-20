#include <stdio.h>

int sumofsqrs (int n) {
    if(n==1) {
             return n;
             }
             else {
                  return (n*n) +sumofsqrs(n-1);
                  }
             }
             int main() {
                 int num;
                 printf("Enter a postive integer:");
                 scanf("%d",&num);
                 if(num<1) {
                           printf("Enter a positive number:);
                           return i;
                           }
                           int result=sumofsqrs(num);
                           printf("sum of sqrs of first %d is = %d",num,result);
                           return 0;
                           }
