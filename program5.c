#include <stdio.h>

int max = 10;

void countDuplicates(int array[]) {

    int count = 0;
    int aux;

    for(int i = 0; i < max; i++) {
        aux = array[i];
        for(int j = i+1; j < max; j++) {
            if(array[j] == array[i]) {
                count++;
            }
        }
    }

    printf("\n\nCount of duplicates: %d \n\n", count);
}

int main() {

    printf("===== DUPLICATED COUNT ==== \n\n");

    int number;
    int array[max];

    for(int i = 0; i < max; i++) {
        printf("\n\nType a number: ");
        scanf("%d", &number);
        array[i] = number;
    }

    countDuplicates(array);

    return (0);

}