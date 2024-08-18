#include <stdio.h>

int main()
{

    printf("==== MAX AND MIN IN ARRAY ====");

    int size = 5;
    int array[size];
    int number;

    for (int i = 0; i < size; i++)
    {
        printf("\nType a number: ");
        scanf("%d", &number);
        array[i] = number;
    }

    int max = array[0];
    int min = array[0];

    for (int i = 0; i < size; i++)
    {
        if (max <= array[i])
        {

            max = array[i];
        }
        else
        {

            min = array[i];
        }
    }

    printf("\n\nMaximum element is: %d\n", max);
    printf("\nMinimum element is: %d\n\n", min);

    return (0);
}