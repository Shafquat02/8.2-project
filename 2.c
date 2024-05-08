#include <stdio.h>

void main()
{
    int start_yr, end_yr, leap_yr[20], count = 0;
    printf("Enter start year: ");
    scanf("%d", &start_yr);
    printf("Enter end year: ");
    scanf("%d", &end_yr);
    for (int yr = start_yr; yr <= end_yr; yr++)
    {
        if ((yr % 4 == 0 && yr % 100 != 0) || (yr % 400 == 0))
        {
            leap_yr[count] = yr;
            count++;
        }
    }
    printf("Leap years between %d and %d are: \n", start_yr, end_yr);
    for (int i = 0; i < count; i++)
    {
        printf("%d\n", leap_yr[i]);
    }
}