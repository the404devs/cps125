#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(void){
    char c;
    printf("Enter class: ");
    scanf("%c", &c);

    switch (tolower(c))
    {
    case 'a':
        printf("Aircraft Carrier\n");
        break;

    case 'c':
        printf("Cruiser\n");
        break;
    
    case 'd':
        printf("Destroyer\n");
        break;

    case 'f':
        printf("Frigate\n");
        break;

    case 's':
        printf("Submarine\n");
        break;

    default:
        printf("Unknown ship\n");
        break;
    }
}