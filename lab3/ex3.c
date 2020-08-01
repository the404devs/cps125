#include <stdio.h>
#include <math.h>

int main(void){
    double r;
    printf("Enter radius: ");
    scanf("%lf", &r);


    double v = (4.0/3.0) * M_PI * pow(r,3);
    printf("Volume is: %lf\n", v);


}