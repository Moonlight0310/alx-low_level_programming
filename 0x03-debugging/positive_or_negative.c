#include "main.h"

void positive_or_negative(int i)
{
	if (i > 0)
		printf("% is positive\n", i);
	else if (i < 0)
		printf("% is negative\n", i);
	else
		printf("% is zero\n", i);
}
