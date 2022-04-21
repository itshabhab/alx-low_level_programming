#include "main.h"
/**
 * _strcmp - compares pointers to two strings
 * @s1: a pointer to the frist strings to be compared
 * @s2: a pointer to the second stirng to be compared
 * Return: if str1 < str2, the negative diffrence of
 * the first unmatched characters
 * if s1 == s2, 0.
 * if s1 > s2, the positive diffrence of the first unmatched characters
 */
int _strcmp(char *s1, char *s2)
{
while ((*s1 && *s2) && (*s1 == *s2))
{
s1++;
s2++;
}
return (*s1 - *s2);
}
