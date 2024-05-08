#include <stdio.h>

void main()
{
    int a[5], b[3], c[8], i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter the value of a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("The array a[%d] is: %d\n", i, a[i]);
    }
    for (i = 0; i < 3; i++)
    {
        printf("Enter the value of b[%d]: ", i);
        scanf("%d", &b[i]);
    }
    for (i = 0; i < 3; i++)
    {
        printf("The array b[%d] is: %d\n", i, b[i]);
    }
    for (i = 0; i < 8; i++)
    {
        if (i < 5)
        {
            c[i] = a[i];
        }
        else
        {
            c[i] = b[i - 5];
        }
    }
    printf("The new array is: ");
    for (i = 0; i < 8; i++)
    {
        printf("%d ", c[i]);
    }
}