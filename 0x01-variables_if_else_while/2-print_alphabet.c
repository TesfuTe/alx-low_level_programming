#include <stdio.h>

/**
 *main - print lowercase letters using putchar.
 *Return: This returns 0 (success) as per the instruction.
 */

int main(void)
{
	char small_alpha = 'a';

	while (small_alpha <= 'z')
	{
		putchar(small_alpha);
		small_alpha++;
	}
	putchar('\n');

	return (0);
}
