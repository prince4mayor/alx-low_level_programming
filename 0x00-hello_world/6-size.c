#include <stdio.h>
/**
 * main - A programe that prints the size of various computer type
 * Return 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
rintf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
