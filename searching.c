int search(int *arr, int target, int arr_length)
{
    int start_index = 0;
    int end_index = arr_length - 1;
    int mid_index = (start_index + end_index) / 2;

    if (arr[mid_index] == target)
        return mid_index;

    int match_index = -1;
    while ((start_index < end_index) && arr[mid_index] != target)
    {
        if (arr[mid_index] < target)
        {
            start_index = mid_index + 1;
        }
        else
        {
            end_index = mid_index - 1;
        }

        mid_index = (start_index + end_index) / 2;

        if (arr[mid_index] == target)
        {
            match_index = mid_index;
        }
    }

    return match_index;
}