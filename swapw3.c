#include<stdio.h>

int main(){
    int a,b;
printf("Enter the value of a\n");
scanf("%d",&a);
printf("Enter the value of b\n");
scanf("%d",&b);
// Swap without third variable.
   a=a+b;
   b=a-b;
   a=a-b;
   printf("\na=%d\n b=%d\n", a, b);
    return 0;
}