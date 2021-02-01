#include <stdio.h>

int main()
{

    int a[20], size, temp;
    printf("Enter size of an array: ");
    scanf("%d", &size);

    printf("Enter elements of an array: \n");
    for (int i = 0; i < size; i++)
    {  
         scanf("%d", &a[i]);
    }

    // logic for selection sorting
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("After selection sorting: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}