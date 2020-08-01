#include <stdio.h>

int//misspelled as "inx"
main (void)
{
	int a = 3, b = 4, e;//For single-line declarations, separate with a comma, not a semicolon
	double f = 4, c;//Type name wrong, small d
    int d;//d should be the same type as a and b.
	d = a + b;
	c = a / (f - b)+1;//Divison by 0. added a little +1 to avoid
	printf ("The value of d is %d\n", d);//missing quote and semicolon
	return (0);
}