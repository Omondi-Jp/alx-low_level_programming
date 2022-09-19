#include "main.h"
/**
 * reset- resets the value it points to 98.
 *
 * return: always 0.
 */
void reset_to_98(int *n)
{
	int n = 0;

	int *p = &n;

	*p = 98;
	
	return (0);
}
