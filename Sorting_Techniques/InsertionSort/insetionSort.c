#include <stdio.h>
int main(){
    int a[20],j,size, temp;
    printf("Enter size of an array: ");
    scanf("%d", &size);

    printf("Enter elements of an array: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    //Insertion sorting logic
    for (int i = 1; i < size; i++)
    {
        temp = a[i];
        j = i - 1;
        while (temp < a[j] && j >=0)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = temp;
        
    }

    printf("Elements after insertion sorting : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;

}