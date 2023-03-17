#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer or NULL
 */
int *array_range(int min, int max)
{
        int *pt;
        int i;

        if (min > max)
        {
                return (NULL);
        }

        pt = malloc(sizeof(int) * ((max - min) + 1));

        if (pt == NULL)
        {
                return (NULL);
        }

        for (i = 0; min <= max; i++, min++)
        {
                pt[i] = min;
        }

        return (pt);
