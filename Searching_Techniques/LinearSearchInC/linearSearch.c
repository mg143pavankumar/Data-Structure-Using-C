//Linear Search
#include <stdio.h>

int main()
{
    int a[20], size, i, key;
    printf("Enter size of an array: ");
    scanf("%d", &size);

    printf("Enter elements of array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the value to be search: ");
    scanf("%d", &key);

    for (int i = 0; i < size; i++)
    {
        if (key == a[i])
        {
            printf("Element is found at index[%d] = %d", i, key);
            break;
        }
    }

    if (i == size)
    {
        printf("Searching element is not found..!");
    }

    return 0;
}