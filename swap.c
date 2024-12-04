#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;

    printf("enter the value of a ");
    scanf("%d", &a);

    printf("enter the value of b ");
    scanf("%d", &b);

    printf("enter the value of c ");
    scanf("%d", &c);

    printf("Values of a and b before swapping is:%d%d \n", a, b);

    c = a;
    a = b;
    b = c;
    printf("Values of a and b after swapping is:%d%d \n", a, b);
    return 0;
}