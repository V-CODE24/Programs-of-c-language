// fibonacci series 0,1,1,2,3,5.....
#include<stdio.h>
int fibonacci(int);

int fibonacci(int n){

    if(n==1 || n==2){
    return(n-1);// so that starting will be 0 and 1(base condition) 
}
return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n=4;
    printf("Fibonacci series for %d is %d",n,fibonacci(n));
    return 0;
}