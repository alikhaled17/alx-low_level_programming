#include "main.h"
int main(void)
{
	char word[10] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(word[i]);
	}
	_putchar(10);
	return (0);
}

