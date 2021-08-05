#include "holberton.h"
/**
 * display_complex_number - displays the complex numbers
 * @c: struct
 */
void display_complex_number(complex c)
{
	if (c.rn != 0)
	{
		if (c.in < -1)
			printf("%.9g - %.9gi\n", c.rn, c.in * (-1));
		else if (c.in == -1)
			printf("%.9g - i\n", c.rn);
		else if (c.in == 0)
			printf("%.9g\n", c.rn);
		else if (c.in == 1)
			printf("%.9g + i\n", c.rn);
		else
			printf("%.9g + %.9gi\n", c.rn, c.in);
	}
	else
	{
		if (c.in < 0)
			printf("- %.9gi\n", c.in * (-1));
		else if (c.in == 0)
			printf("0\n");
		else
			printf("%.9g\n", c.in);
	}
}
