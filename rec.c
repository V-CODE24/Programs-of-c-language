#include<stdio.h>
int factorial(int);

int factorial(int n){
    if(n==1 || n==0){ //Base condition that ensures that this recursive program is  ending
        return 1;
    }

    return n*factorial(n-1);
}
int main(){
    int number;
    printf("Enter the number to find it's factorial\n :");
    scanf("%d",&number);
    printf("The factorial of %d is %d",number,factorial(number));
    return 0;
}
