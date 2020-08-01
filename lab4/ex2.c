#include <stdio.h>
#include <math.h>

int main(void){
    double a1, a2, t1, t2;

    printf("Enter assignment grades: ");
    scanf("%lf %lf", &a1, &a2);

    printf("Enter test grades: ");
    scanf("%lf %lf", &t1, &t2);

    double avg = (a1+a2+t1+t2)/4;
    char grade;

    if(avg>=80){
        grade = 'A';
    }
    else if (avg>=70){
        grade = 'B';
    }
    else if (avg>=60){
        grade = 'C';
    }
    else if (avg>=50){
        grade = 'D';
    }
    else{
        grade = 'F';
    }
    
    if(t1<50 || t2<50){
        grade = 'F';
    }


    printf("\nAssignment 1: %2.2lf\%\n", a1);
    printf("Assignment 2: %2.2lf\%\n", a2);
    printf("Test 1: %2.2lf\%\n", t1);
    printf("Test 2: %2.2lf\%\n", t2);
    printf("Average: %2.2lf\%\n", avg);
    printf("The grade is %c.\n", grade);
}