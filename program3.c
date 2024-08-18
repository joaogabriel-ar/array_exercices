#include <stdio.h>

int sum(int array[], int size) {

    int sum = 0;

    for(int i = 0; i < size; i++) {

        sum+=array[i];

    }

    printf("\nSum: %d \n\n", sum);

}

int main() {

    printf("===== SUM ELEMENTS IN ARRAY =======\n\n");

    int max = 3;
    int array[max];
    int number;

    for(int i = 0; i < max; i++) {

        printf("Type a number: "); 
        scanf("%d",&number);
        array[i] = number;
    }

    sum(array, max);

    return (0);

}