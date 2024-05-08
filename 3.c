#include <stdio.h>

void main()
{
    int a[5], i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter the value of a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("The array elements are: \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        a[i] *= a[i];
    }
    printf("\nThe square of values are: \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
}