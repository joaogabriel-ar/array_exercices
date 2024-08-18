#include <stdio.h>

int main()
{

    printf("PROGRAM ARRAY REVERSE ORDER\n\n");

    int max = 3;
    int array[max];
    int number;

    for (int i = 0; i < max; i++)
    {
        printf("Type a number: ");
        scanf("%d", &number);
        array[i] = number;
    }

    printf("\nNumbers in array: ");

    for (int j = 0; j < max; j++)
    {
        printf("%d ", array[j]);
    }

    printf("Numbers reversed: ");

    for (int k = max - 1; k >= 0; k--)
    {
        printf("%d ", array[k]);
    }

    return (0);
}