#include<stdio.h>
void good_morning();
void good_afternoon();
void good_evening();

void good_morning()
{
    printf("good_morning\n");
}
void good_afternoon()
{
    printf("good_afternoon\n");
}
void good_night()
{
    printf("good_night\n");
}
int main(){
    good_morning();
    good_afternoon();
    good_night();
    return 0;
}