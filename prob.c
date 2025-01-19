// avg of three numbers using fxn
#include<stdio.h>
float average(int a,int b,int c);

float average(int a,int b,int c){
    return (a+b+c)/3.0;//division in  int and float so that answer will be float
}
int main(){
    int a=4, b=4,c=5;
    printf("The average of a,b,c is %f",average(a,b,c));
    return 0;
}