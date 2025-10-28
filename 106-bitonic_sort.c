#include "sort.h"
#include <stdio.h>

/**
* swap_ints - swaps two integers
* @a: first int
* @b: second int
*/
void swap_ints(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}

/**
* bitonic_merge - recursively sorts a bitonic sequence in ascending or descending order
* @array: array of integers
* @size: total size of array
* @start: starting index
* @seq_size: size of the current sequence
* @up: 1 for ascending, 0 for descending
*/
void bitonic_merge(int *array, size_t size, size_t start, size_t seq_size, int up)
{
size_t i, mid;

if (seq_size < 2)
return;

mid = seq_size / 2;
for (i = start; i < start + mid; i++)
{
if ((up && array[i] > array[i + mid]) ||
(!up && array[i] < array[i + mid]))
swap_ints(&array[i], &array[i + mid]);
}

bitonic_merge(array, size, start, mid, up);
bitonic_merge(array, size, start + mid, mid, up);
}

/**
* bitonic_sort_recursive - builds a bitonic sequence and sorts it
* @array: array to sort
* @size: total array size
* @start: start index of sequence
* @seq_size: size of current sequence
* @up: direction (1 = ascending, 0 = descending)
*/
void bitonic_sort_recursive(int *array, size_t size, size_t start, size_t seq_size, int up)
{
size_t mid;

if (seq_size < 2)
return;

mid = seq_size / 2;

printf("Merging [%lu/%lu] (%s):\n", seq_size, size, up ? "UP" : "DOWN");
print_array(array + start, seq_size);

bitonic_sort_recursive(array, size, start, mid, 1);       /* ascending */
bitonic_sort_recursive(array, size, start + mid, mid, 0); /* descending */
bitonic_merge(array, size, start, seq_size, up);

printf("Result [%lu/%lu] (%s):\n", seq_size, size, up ? "UP" : "DOWN");
print_array(array + start, seq_size);
}

/**
* bitonic_sort - sorts an array of integers using Bitonic sort algorithm
* @array: array to sort
* @size: size of array
*/
void bitonic_sort(int *array, size_t size)
{
if (!array || size < 2)
return;

bitonic_sort_recursive(array, size, 0, size, 1);
}

