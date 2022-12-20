#include <stdio.h>
#include "main.h"

/**
<<<<<<< HEAD
 *
 * _strlen - a function to print the length of a string
 * @s: string to be supplied
 * Return: Always 0 (Success)
 */
=======
* _strlen - a function to print the length of a string
* @s: string to be supplied
* Return: Always 0 (Success)
*/
>>>>>>> 6d7f6b16f28aae6ed7abd1fbe78067f40baf50d4

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

<<<<<<< HEAD

=======
>>>>>>> 6d7f6b16f28aae6ed7abd1fbe78067f40baf50d4
	return (i);
}
