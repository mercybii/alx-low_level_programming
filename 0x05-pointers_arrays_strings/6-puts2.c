#include <stdio.h>

void puts2(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i += 2)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}

int main(void)
{
	char str[] = "chebet bii!";

	puts2(str);
	return (0);
}
