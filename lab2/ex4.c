#include <stdio.h>
#include <math.h>

int main(void){
    printf("%f\n", 5.0/3);
    double in;
    printf("Enter number: ");
    scanf("%lf", &in);

    int t = (int)in / 1000 * 1000;
    int h = (int)in / 100 * 100;
    printf("Nearest thousandth: %i\n", t);
    printf("Nearest hundred: %i\n", h);
    printf("One decimal: %7.1lf\n", in);
}