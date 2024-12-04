#include<stdio.h>

int main(){
    int a;
    int b;
    int c;
    printf("Enter the three numbers\n");
    scanf("%d %d %d",&a,b,&c);
    if((a>b && a>c))
    printf("a is largest among three \n");
    
    else if((b>a && b>c));
    printf("b is largest among three \n");

   else
    printf("c is largest among three \n");

    return 0;
}