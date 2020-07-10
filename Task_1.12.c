#include <stdio.h>

#define IN 1
#define OUT 0

main()
{
	int c, state;

	state = OUT;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\t')
		{
			state = OUT;
			printf("\n");
		}
		else if (state == OUT)
		{
			state = IN;
		}

		if (state == IN)
		{
			putchar(c);
		}
	}
}