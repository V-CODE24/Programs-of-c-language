#include<stdio.h>

int main(){
    int year;

    printf("Enter the year you want to check");
    scanf("%d",&year);

    if(year%4==0)//checking its divisible by 4 or not
    { if (year%100==0)//checking it's century year or not
{
   if(year%400 == 0)
   printf("Leap Year");
   else
    printf("Not a leap year");
    }
    else
    printf("Leap year");
    }
    else
    printf("Not a leap year");

    return 0;
}