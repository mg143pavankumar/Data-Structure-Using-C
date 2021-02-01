#include <stdio.h>
int main(){
    int a[20], size, temp;

    printf("Enter size of an array : ");
    scanf("%d", &size);

    printf("Enter the elements of an array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    // bubble sort logic
    for (int i = 0; i < (size - 1); i++)
    {
        for (int j = 0; j < (size - 1 - i); j++)
        {
            if (a[j] >  a[j + 1])   
            {
                temp = a[j];
                a[j] =  a[j + 1];
                a[j + 1] =  temp;
            }
            
        }
        
    }

    printf("Elements after sorting: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    
    
    return 0;
}