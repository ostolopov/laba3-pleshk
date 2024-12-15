#include "arraylib.h"

int get_int(int *number, int min, int max){
        int check = 0, number_check, flag = 0;
        while(flag == 0){
                check = scanf("%d" , &number_check);
                switch(check){
                        case EOF:
                                printf("Работа программы прекращена.\n");
                                flag = 1;
                                break;
                        case 1 :
                                if (number_check < min || number_check > max)
                                {
                                    printf("Число вышло за разрешенный диапазон. Попробуйте еще раз!\n");
                                    scanf("%*[^\n]");
                                    flag = 0;
                                    break;
                                }
                                *number = number_check;
                                scanf("%*[^\n]");
                                flag = 1;
                                break;
                        case 0:
                                printf("Число неверно. Попробуйте еще раз!\n");
                                scanf("%*[^\n]");
                                flag = 0;
                                break;
                        
                }
        }
        return check;
}

void arr_inicialization (int **arr, int *arr_size)
{
    int arr_size_local = 0;
    int arr_element;
    printf("Введите размер массива: \n");
    get_int(&arr_size_local, 1, INT_MAX);
    *arr = realloc(*arr, arr_size_local * sizeof(int));
    for (int i = 0; i < arr_size_local; i++)
    {
        printf("arr[%d] = ", i);
        get_int(&arr_element, INT_MIN, INT_MAX);
        (*arr)[i] = arr_element;
        
    }
    *arr_size = arr_size_local;
}

void arr_print (int *arr, int arr_size)
{
    if (arr_size == 0)
    {
        printf("Массив не инициализирован\n");
        return;
    }
    int arr_element = 0;
    for (int i = 0; i < arr_size; i++)
    {
        arr_element = arr[i];
        printf("arr[%d] = %d\n", i , arr_element);
    }
}

void min_max (int *arr, int arr_size)
{
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < arr_size; i++)
    {
        arr[i] = arr[i];
    }
    for (int i = 1; i < arr_size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        } else if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("Маскимальное значение: %d\nМинимальное значение: %d\n", max, min);
}

void arr_sort (int *arr, int arr_size)
{
    int *arr_local = malloc(arr_size * sizeof(int));
    for (int i = 0; i < arr_size; i++)
    {
        arr_local[i] = arr[i];
    }
    for (int i = 0; i < arr_size; i++)
    {
        for (int j = 0; j < arr_size - i; j++)
        {
            if (arr_local[j] > arr_local[j + 1])
            {
                int temp = arr_local[j];
                arr_local[j] = arr_local[j + 1];
                arr_local[j + 1] = temp;
            }
        }
    }
    arr_print(arr_local, arr_size);
    free(arr_local);
}

void arr_up_num(int *arr, int arr_size)
{
    int *arr_local = malloc(arr_size * sizeof(int));
    int index = 0;
    int number = 0;
    printf("Введите значение: \n");
    get_int(&number, INT_MIN, INT_MAX);
    for (int i = 0; i < arr_size; i++)
    {
        if (arr[i] > number)
        {
            arr_local[index] = arr[i];
            index++;
        }
    }
    arr_print(arr_local, index);
    free(arr_local);
}

void negative_num (int *arr, int arr_size)
{
    int *arr_local = malloc(arr_size * sizeof(int));
    for (int i = 0; i < arr_size; i++)
    {
        arr_local[i] = arr[i];
    }
    for (int i = 0; i < arr_size; i++)
    {
        if (arr_local[i] < 0)
            arr_local[i] = 0;
    }
    arr_print(arr_local, arr_size);
    free(arr_local);
}

void arr_sum_and_multi (int *arr, int arr_size)
{
    int sum = 0;
    long long int multi = 1;
    for (int i = 0; i < arr_size; i++)
    {
        sum += arr[i];
        multi *= arr[i];
    }
    printf("Сумма элементов: %d\nПроизведение элементов: %lld\n", sum, multi);
}


int is_prime(int num) {
    if (num < 0)
    {
        num *= -1;
    }
    if (num <= 1)
    {
        return 0;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void prime_number_count(int *arr, int arr_size) {
    int count = 0;
    for (int j = 0; j < arr_size; j++)
    {
        int num = arr[j];
        if (is_prime(num))
        {
            count++;
        }
    }
    printf("Количество простых чисел: %d\n\n", count);
}
