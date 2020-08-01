#include <stdio.h>
#include <math.h>

int main(void){
    int a, b, c;
    printf("Enter int 1: ");
    scanf("%d", &a);
    printf("Enter int 2: ");
    scanf("%d", &b);


    if (a==b)
    {
        c = (a + b) * 3;
        printf("Numbers are the same. Triple of sum is: %d\n", c);

    }
    else
    {
        c = a + b;
        printf("Sum is: %d\n", c);

    }
    
    



}