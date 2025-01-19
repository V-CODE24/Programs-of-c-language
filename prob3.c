#include<stdio.h>
float force(float);

float force( float mass){
    return mass*9.8;
}

int main(){
    float m=4;
    printf("The force of is %.2f",force(m));
    return 0;
}