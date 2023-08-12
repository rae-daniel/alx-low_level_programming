#include <stdio.h>
/**
 * main - Entry point
 * Return: eachtime 0 (successful)
 */

int main(void)
{
	char C;
	char d;

	C = 'a';
	d = 'A';
	while
		(C <= 'z') {
			putchar(C);
			C++;
		}
	while
		(d <= 'Z') {
			putchar(d);
			d++;
		}
	putchar('\n');
	return (0);
}
