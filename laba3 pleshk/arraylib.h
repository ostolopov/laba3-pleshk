#ifndef arraylib_h
#define arraylib_h

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int get_int(int *number, int min, int max);
void arr_inicialization (int **arr, int *arr_size);
void arr_print (int *arr, int arr_size);
void min_max (int *arr, int arr_size);
void arr_sort (int *arr, int arr_size);
void arr_up_num(int *arr, int arr_size);
void negative_num (int *arr, int arr_size);
void arr_sum_and_multi (int *arr, int arr_size);
void prime_number_count (int *arr, int arr_size);

#endif
