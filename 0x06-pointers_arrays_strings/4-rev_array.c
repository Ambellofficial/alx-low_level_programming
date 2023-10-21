#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * @a: the array to be reversed
 * @n: the number of element in array
 */
void reverse_array(int *a, int n)

{
	int tmp, ind;

	for (ind = n - 1; ind >= n / 2; ind--)
	{
		tmp = a[n - 1 - ind];
		a[n - 1 - ind] = a[ind];
		a[ind] = tmp;
	}
}
