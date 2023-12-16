#include <stdio.h>
#include "sorting.h"
#include "searching.h"

void display_list(int *list, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ", list[i]);
    }
}

int main()
{
    int arr[5] = {
        1,
        3,
        4,
        2,
        5,
    };

    printf("\n");
    printf("Original Array : ");
    display_list(arr, 5);

    sort(arr, 5, 0);
    printf("\n");
    printf("Ascending Sort Result : ");
    display_list(arr, 5);

    int search_index = search(arr, 2, 3);
    if (search_index != -1)
    {
        printf("Data ditemukan pada index: %d", search_index);
    }

    return 0;
}
