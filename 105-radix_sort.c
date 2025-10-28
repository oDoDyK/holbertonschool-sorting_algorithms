#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
* get_max - gets the maximum value in an array
* @array: array to search
* @size: size of the array
* Return: maximum integer
*/
int get_max(int *array, size_t size)
{
size_t i;
int max = array[0];

for (i = 1; i < size; i++)
{
if (array[i] > max)
max = array[i];
}
return (max);
}

/**
* counting_sort_radix - performs counting sort based on a specific digit
* @array: array to sort
* @size: size of the array
* @exp: current digit exponent (1, 10, 100, ...)
*/
void counting_sort_radix(int *array, size_t size, int exp)
{
int count[10] = {0};
int *output;
size_t i;

output = malloc(sizeof(int) * size);
if (!output)
return;

/* Count occurrences of each digit */
for (i = 0; i < size; i++)
count[(array[i] / exp) % 10]++;

/* Update count[i] so it contains the actual position */
for (i = 1; i < 10; i++)
count[i] += count[i - 1];

/* Build output array */
for (i = size; i > 0; i--)
{
output[count[(array[i - 1] / exp) % 10] - 1] = array[i - 1];
count[(array[i - 1] / exp) % 10]--;
}

/* Copy back */
for (i = 0; i < size; i++)
array[i] = output[i];

free(output);
}

/**
* radix_sort - sorts an array of integers using LSD Radix sort algorithm
* @array: array to sort
* @size: size of the array
*/
void radix_sort(int *array, size_t size)
{
int max, exp;

if (!array || size < 2)
return;

max = get_max(array, size);

for (exp = 1; max / exp > 0; exp *= 10)
{
counting_sort_radix(array, size, exp);
print_array(array, size);
}
}

