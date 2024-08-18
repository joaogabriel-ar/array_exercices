#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("==== FREQUENCY IN ARRAY ====");

    int size = 5;
    int array[size];
    int number;
    int count = 1;
    int aux[size];

    for (int i = 0; i < size; i++)
    {
        printf("\nType a number: ");
        scanf("%d", &number);

        array[i] = number;
        aux[i] = -1;
    }

    for(int i = 0; i < size; i ++) {

        for (int j = i+1; j < size; j++)
        {

            if (array[j] == array[i])
            {
                count++;
                aux[j] = 0;
            }


        }

        if(aux[i] == -1 ) {

            aux[i] = count;
        }



        count = 1;

    }
    printf("===========");

    for(int i = 0; i < size; i++) {

        if(aux[i] > 0) {

            printf("\n%d occurs %d times\n", array[i], aux[i]);

        }

    }

    return (0);
}