#include <stdio.h>
#include <math.h>

int main(void){
    double a = 100, b = 200, c = 400, d = 800;
    printf("              Metres|                Yards|                Miles\n");

    printf("%20.0lf| %20.5lf| %20.5lf\n", a, a*1.094, a*0.0006215);
    printf("%20.0lf| %20.5lf| %20.5lf\n", b, b*1.094, b*0.0006215);
    printf("%20.0lf| %20.5lf| %20.5lf\n", c, c*1.094, c*0.0006215);
    printf("%20.0lf| %20.5lf| %20.5lf\n", d, d*1.094, d*0.0006215);

}