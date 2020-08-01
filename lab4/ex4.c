/*
Cannot use a switch in this case, as switches do not allow for 
greater-than or less-than comparisons, only equal-to
*/
#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(void){
    double r;
    printf("Enter value: ");
    scanf("%lf", &r);

    if(r>=7.5){
        printf("Catastrophe: Most buildings destroyed\n");
    }
    else if (r>=6.5){
        printf("Disaster: Houses and buildings may collapse\n");
    }
    else if (r>=5.5){
        printf("Serious damage: Walls may crack or fall\n");
    }
    else if (r>=5.0){
        printf("Some damage\n");
    }
    else{
        printf("Little to no damage\n");
    } 
}