#include <stdio.h>
int main()
{
    int n;
    printf("Enter a year: ");
    scanf("%d", &n);
    if (n % 100 == 0)
    {
        if (n % 400 == 0)
        {
            printf("%d is a leap year", n);
        }
        else
        {
            printf("%d is not a leap year", n);
        }
    }
    else if (n % 4 == 0)
    {
        printf("%d is a leap year", n);
    }
    else
    {
        printf("Given year is not a leap year");
    }

    return 0;
}