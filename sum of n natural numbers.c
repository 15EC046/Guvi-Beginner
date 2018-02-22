#include <stdio.h>
void main()
{
    int i, number, sum = 0;
    scanf ("%d", &number);
    for (i = 1; i <= number; i++)
    {
        sum = sum + i;
    }
    printf ("%d",sum);
}
