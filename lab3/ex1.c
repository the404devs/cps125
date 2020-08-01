#include <stdio.h>
#include <math.h>

int main(void){
    int a, b, c, d;
    printf("Enter number 1: ");
    scanf("%i", &a);
    printf("Enter number 2: ");
    scanf("%i", &b);
    printf("Enter number 3: ");
    scanf("%i", &c);
    printf("Enter number 4: ");
    scanf("%i", &d);


    int sum = a+b+c+d;
    printf("Sum is: %i\n", sum);

    int sumdiff = (a+b)-(c+d);
    printf("Sum of first two minus sum of last two is: %i\n", sumdiff);

    int sumsquare = (a*a)+(b*b)+(c*c)+(d*d);
    printf("Sum of squares is: %i\n", sumsquare);

    double sqrtsquaresum = sqrt((double)sumsquare)/(double)sum;
    printf("Square root of sum of squares divided by sum is: %1.2lf\n", sqrtsquaresum);

}