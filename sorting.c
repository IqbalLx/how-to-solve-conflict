
#include <stdio.h>

int swap(int *x, int *y)
{
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

int sort(int *list, int length, int type)
{
  for (int i = 0; i < length - 1; i++)
  {
    int temp;
    for (int j = 0; j < length - 1 - i; j++)
    {
      if (type == 1)
      {
        if (list[j] < list[j + 1])
        {
          swap(&list[j], &list[j + 1]);
        }
      }
      else
      {
        if (list[j] > list[j + 1])
        {
          swap(&list[j], &list[j + 1]);
        }
      }
    }
  }
}
