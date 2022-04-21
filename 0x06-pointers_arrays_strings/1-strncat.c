#include "main.h"
/**
 * _strcat - Entry point
 * @dest: Variables which will hold the strings
 * @src: variables which holds the strings
 * @n: int
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
/*declare and init vars*/
int i;
char *destPointer = dest;
int len = 0;
if (dest == 0)
{
return (0);
}
/*length of string dest*/
while (*dest)
{
len++;
dest++;
}
dest = destPointer;
for (i = 0; i < n && src[i]; i++)
{
dest[len + i] = src[i];
}
dest[len + i] = '\0';
return (dest);
}
