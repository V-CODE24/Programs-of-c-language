#include<stdio.h>

int main(){
    int num;
    printf("Enter the number you want table of:");
    scanf("%d",&num);
      
printf("The table of number of %d is\n",num);
// for(i=0;i<1;i++)
// {
//     printf("%d x %d =%d\n",num,i,(i+1)*num);
// }
    for(int i=1;i<=10;i++)
    {
      printf("%d x %d\n",num,i,num*i);
    }

    return 0;
}