#include <stdio.h>
int sum(int, int); // fxn prototype

int sum(int x, int y) // fxn definition (hone kya wala hai)
{
    // printf("The sum of number is :%d\n", x + y);
    return x + y;
}

int main()
{
    int a = 1;
    int b = 2;
    //    int c=a+b;
    //    printf("sum of two numbers is %d\n",c);
    int c = sum(a, b); // fxn call and b are parameters
    printf("%d\n", c);

    int a1 = 2;
    int b1 = 3;
    // int c1 = a1 + b1;
    // printf("The sum of number is : %d\n", c1);
    int c1=sum(a1, b1);// fxn call
     printf("%d\n", c1);


    int a2 = 5;
    int b2 = 6;
    // int c2 = a2 + b2;
    // printf("sum of two numbers is %d", c2);
   int c2= sum(a2, b2); //fxn call
    printf("%d\n", c2);

    return 0;
}