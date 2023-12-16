#include <stdio.h>

#include "searching.h"

int main()
{
    int arr[3] = {
        1,
        2,
        3,
    };

    int search_index = search(arr, 2, 3);
    if (search_index != -1)
    {
        printf("Data ditemukan pada index: %d", search_index);
    }

    return 0;
}