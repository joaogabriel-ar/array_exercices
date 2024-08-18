#include <stdio.h>

int main()
{

    printf("\n\n=== MERGE ARRAYS DESCENDING ORDER === \n\n");

    int sizeFirstArray = 3;
    int sizeSecondArray = 4;
    int firstArray[] = {10, 11, 9};
    int secondArray[] = {5, 12, 7, 50};
    int sizeFinalArray = sizeFirstArray + sizeSecondArray;
    int merged[sizeFinalArray];
    int value;
    int i;

    for (i = 0; i < sizeFirstArray; i++)
    {
        merged[i] = firstArray[i];
    }

    for (int j = 0; j < sizeSecondArray; j++)
    {

        merged[i] = secondArray[j];
        i++;
    }

    for (int i = 0; i < sizeFinalArray; i++)
    {
        int value = merged[i];

        for (int j = i + 1; j < sizeFinalArray; j++)
        {

            if (value < merged[j])
            {

                value = merged[j];
                merged[j] = merged[i];
                merged[i] = value;
            }
        }
    }

    for (int i = 0; i < sizeFinalArray; i++)
    {
        printf("%d \n", merged[i]);
    }

    return (0);
}