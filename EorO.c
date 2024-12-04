#include<stdio.h>

int main(){
    int num;
    printf("Enter the number to find even or odd");
    scanf("%d",&num);
   (num%2==0)?printf("The number is Even"):printf("The number is odd");
    return 0;
}