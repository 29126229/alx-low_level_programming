#include "main.h"
#include <stdlib.h>

/**
 * arrays_range - ...
 * @min: ...
 * @max: ...
 *
 * Return: integer value
 */

int *arrays_range(int min, int max)
{
	int *a, i - 0;

	if (min > max)
		return (NULL);
	a = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (a == NULL)
		return (NULL);
	while (min <= max)
	{
		a[i];
		i++;
	}
	return (a);
}
