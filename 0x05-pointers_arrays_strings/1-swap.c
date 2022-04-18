#include "main.h"
/**
 * swap_int - swap the value of two intigers
 * @a: point 1
 * @b: point 2
 * Return: 0
 */
void swap_int(int *a, int *b)
{
int hab;
hab = *a;
*a = *b;
*b = hab;
}
