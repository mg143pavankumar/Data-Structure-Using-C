#include <stdio.h>

int main()
{
    int a[20], size, key, i, first, last, middle;
    printf("Enter the size of an array: ");
    scanf("%d", &size);

    printf("Enter value into an array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the value you want to search\n");
    scanf("%d", &key);

    first = 0;
    last = size - 1;

    while (first <= last)
    {
        middle = (first + last) / 2;

        if (key > a[middle])
        {
            first = middle + 1;
        }
        else if (key == a[middle])
        {
            printf("Element is found at index[%d] = %d", middle, key);
            break;
        }
        else if (key < a[middle])
        {
            last = middle - 1;
            middle = (first + last) / 2;
        }

        if (first > last)
        {
            printf("Element is not found while searching...!");
        }
    }

    return 0;
}