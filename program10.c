#include <stdio.h>

int main () {

    printf("===== SEPARATE ODDS AND EVENS ====");

    int size = 5;
    int array[size];
    int evenArray[size];
    int oddArray[size];
    int number;
    int e = 0,o = 0;

    for (int i = 0; i < size; i ++) {

        printf("\nType a number: ");
        scanf("%d", &number);
        array[i] = number;

    }

    for(int i = 0; i < size; i++) {

        if((array[i] % 2) == 0 ) {

            evenArray[e] = array[i];
            e++;

        } else {
            oddArray[e] = array[i];
            o++;
        }

    }

    printf("\nThe evens elements are: \n");
    for (int i = 0; i < e; i++)
    {
        printf("%d ", evenArray[i]);
    }

    printf("\n\nThe odds elements are: \n");
    for (int i = 0; i < o; i++)
    {
        printf("%d ", oddArray[i]);
    }
    

    return (0);

}