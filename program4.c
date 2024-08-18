#include <stdio.h>
#include<stdlib.h>

int max = 3;

int printArray(int array[]) {

    for(int i = 0; i < max; i++) {

        printf("%d ", array[i]);

    }

}

int *clone(int array[]) {

    int *clone = malloc(max *sizeof(int));

    for(int i = 0; i < max; i++) {

        clone[i] = array[i];

    }

    return clone;

}

int main() {

    int array[max];
    int number;

    printf("==== CLONE ARRAY TO ANTOHER ====\n\n");

    for(int i = 0; i < max; i++) {

        printf("Type a number: ");
        scanf("%d", &number);
        array[i] = number;
    }

    printArray(array);
    printf("| ");

    int *clonedArray = clone(array);

    printArray(clonedArray);

    free(clonedArray);

    return (0);
}