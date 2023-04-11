#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * @param ac The number of command line arguments
 * @param av An array of pointers to the command line arguments
 *
 * @return A pointer to a newly-allocated space in memory containing the concatenated strings, or NULL if an error occurred.
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
char *s;

s = argstostr(ac, av);
if (s == NULL)
{
return (1);
}
printf("%s", s);
free(s);
return (0);
}
