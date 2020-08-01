#include <stdio.h>
#include <math.h>


int main(void){
    double l, s, c;
    printf("Long radius: ");
    scanf("%lf", &l);
    printf("Short radius: ");
    scanf("%lf", &s);
    c = (2 * 3.1415) * sqrt((pow(l, 2)+pow(s, 2))/2);
    
    printf("Approx. circumference: %lf\n", c);
}