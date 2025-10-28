#include "sort.h"
#include <stdio.h>

/**
* swap_ints - swaps two integers
* @a: first int
* @b: second int
*/
void swap_ints(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}

/**
* hoare_partition - Hoare partition scheme
* @array: array to sort
* @size: size of array
* @low: start index
* @high: end index
* Return: partition index
*/
int hoare_partition(int *array, size_t size, int low, int high)
{
int pivot = array[high];
int i = low - 1, j = high + 1;

while (1)
{
do {
i++;
} while (array[i] < pivot);

do {
j--;
} while (array[j] > pivot);

if (i >= j)
return (j);

swap_ints(&array[i], &array[j]);
print_array(array, size);
}
}

/**
* quick_sort_hoare_rec - recursive quicksort (Hoare scheme)
* @array: array to sort
* @size: size of array
* @low: start index
* @high: end index
*/
void quick_sort_hoare_rec(int *array, size_t size, int low, int high)
{
int p;

if (low < high)
{
p = hoare_partition(array, size, low, high);
quick_sort_hoare_rec(array, size, low, p);
quick_sort_hoare_rec(array, size, p + 1, high);
}
}

/**
* quick_sort_hoare - sorts an array using Quick sort (Hoare scheme)
* @array: array to sort
* @size: size of array
*/
void quick_sort_hoare(int *array, size_t size)
{
if (!array || size < 2)
return;

quick_sort_hoare_rec(array, size, 0, (int)size - 1);
}

