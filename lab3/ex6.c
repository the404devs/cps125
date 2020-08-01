#include <stdio.h>
#include <math.h>

int main(void){
    int a, b, c;
    printf("Enter int 1: ");
    scanf("%d", &a);
    printf("Enter int 2: ");
    scanf("%d", &b);
    printf("Enter int 3: ");
    scanf("%d", &c);


    if (a>b)
    {
        if (a>c)
        {
            if (b>c)
            {
                //a,b,c
                printf("%i, %i, %i\n", a, b, c);
            }
            else
            {
                //a,c,b
                printf("%i, %i, %i\n", a, c, b);
            }            
            
        }
        else
        {
            //c,a,b  
            printf("%i, %i, %i\n", c, a, b);          
        }
        
        
    }
    else if (b>c)
    {
        if (a>c)
        {
            //b,a,c
            printf("%i, %i, %i\n", b, a, c);
        }
        else
        {
            //b,c,a
            printf("%i, %i, %i\n", b, c, a);
        }
    }
    else
    {
        //c,b,a  
        printf("%i, %i, %i\n", c, b, a);
    }
}