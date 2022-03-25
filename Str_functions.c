#include "main.h"

/**
 * _strlen_recursion - Returns the lenght of a string
 * @s: String to be checked
 * Return: The lenght of the string of characters
 */
int _strlen_recursion(char *s)
{
	if (!*s || !s)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * _strcmp - Compares two strings
 * @s1: String 1
 * @s2: String 2
 * Return: A positive value if s1 > s2
 * A negative value if s1 < s2
 * 0 if s1 = s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/**
 * _atoi - Print the numbers of the stringg
 * @s: String to be printed
 * Return: 0 if the string don't have numbers
 */
int _atoi(char *s)
{
	int i = 0;
	int u = 0;
	int cont = 0;
	int number;
	unsigned int sum = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (u <= i)
	{
		if (s[u] == '-')
		{
			cont++;
		}
		if (s[u] >= '0' && s[u] <= '9')
		{
			number = s[u] - '0';
			if (cont % 2)
			{
				number = -number;
			}
			sum = (sum * 10) + number;
			if (s[u + 1] < '0' || s[u + 1] > '9')
			{
				break;
			}
		}
		u++;
	}
	if (sum == 0)
	{
		return (0);
	}
	return (sum);
}
