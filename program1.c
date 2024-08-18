#include <stdio.h>

int main () {

    int max = 10;
    int i = 0;
    int number;
    int array[max];

    while(i < max) {

        printf("Type a number: ");
        scanf("%d", &number);
        array[i] = number;
        i++;
    }

    i=0;

    printf("\nNumbers in array: ");
    
    while(i < max) {
        printf("%d ",array[i]);
        i++;
    }

    return (0);

}