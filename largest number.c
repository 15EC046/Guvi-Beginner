#include <stdio.h>
int main()
{
int array[2], i, largest;
for (i = 0; i <= 2; i++)
scanf("%d", &array[i]);
largest = array[0];
for (i = 1; i <= 2; i++) 
{
  if (largest < array[i])
    largest = array[i];
}
printf("\n largest number is : %d", largest);
return 0;
}
