#include <stdio.h>

int max = 4;

void printUniques(int array[]) {

    int count = 0;
    int k = 0;

    printf("\n\nUniques:");

    for(int i=0; i < max; i++) {

        for(int j=0; j<max; j++) {

            
            if(array[i] == array[j] && i != j) {

                count++;
            }

        }

        if(count == 0) {

            printf(" %d", array[i]);
        }

        count = 0;

    }

    printf("\n\n");
}

int main() {

    printf("\n\n==== UNIQUE ELEMENTS IN ARRAY ====\n\n");

    int number;
    int array[max];

    for(int i=0; i < max; i++) {

        printf("\nType a number: ");
        scanf("%d", &number);
        array[i] = number;

    }

    printUniques(array);

}