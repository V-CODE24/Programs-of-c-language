#include <stdio.h>

int main()
{
    int num, rev=0, rem;

    printf("Enter the number:");
    scanf("%d",&num);

while(num!=0)
{
        rem = num % 10;//get the last digit
        rev=rev*10+rem;//add the last to the rev
        num = num / 10;//remove the last digit from the num
        }
        printf("the reverse of the number is :%d\n",rev);

        return 0;
}