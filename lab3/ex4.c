#include <stdio.h>
#include <math.h>

int main(void){
    double a, b, c;
    printf("Enter angle 1: ");
    scanf("%lf", &a);
    printf("Enter angle 2: ");
    scanf("%lf", &b);


    c = 180.0 - a - b;
    printf("Angle 3 is: %lf\n", c);


}