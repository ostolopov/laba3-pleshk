#include <stdio.h>
#include <stdlib.h>

#include "arraylib.h"

int main(void) {
    int *arr = NULL;
    int arr_size = 0;
    int case_number = 0;
    printf("(1) Ввод массива\n(2) Вывод массива\n(3) Поиск максимума и минимума\n(4) Сортировка массива по возрастанию\n(5) Вывод элементов массива больше заданного\n(6) Замена всех отрицательных элементов на 0\n(7) Вычисление суммы и произведения элементов\n(8) Подсчет количества простых чисел в массиве\n(9) Очистить консоль\n\n");
    while (get_int(&case_number, 0 ,9) != -1  && case_number != 0)
    {
        switch (case_number)
        {
            case 1:
                arr_inicialization (&arr, &arr_size);
                break;
            case 2:
                arr_print (arr, arr_size);
                break;
            case 3:
                min_max (arr, arr_size);
                break;
            case 4:
                arr_sort (arr, arr_size);
                break;
            case 5:
                arr_up_num (arr, arr_size);
                break;
            case 6:
                negative_num (arr, arr_size);
                break;
            case 7:
                arr_sum_and_multi (arr, arr_size);
                break;
            case 8:
                prime_number_count (arr, arr_size);
                break;
            case 9:
                system("clear");
                break;
            default:
                printf("Жмакнули не ту кнопку\n");
                break;
        }
        printf("(1) Ввод массива\n(2) Вывод массива\n(3) Поиск максимума и минимума\n(4) Сортировка массива по возрастанию\n(5) Вывод элементов массива больше заданного\n(6) Замена всех отрицательных элементов на 0\n(7) Вычисление суммы и произведения элементов\n(8) Подсчет количества простых чисел в массиве\n(9) Очистить консоль\n\n");
    }
    free(arr);
    return 0;
}
