#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i, j, k;
    int numbers[5];
    int *array;

    puts("These variables are not initialized:");

    printf("  i = %d\n", i);
    printf("  j = %d\n", j);
    printf("  k = %d\n", k);

    puts("This array is not initialized:");

    for (i = 0; i < 5; i++) {
        printf("  numbers[%d] = %d\n", i, numbers[i]);
    }

    puts("malloc an array ...");
    array = malloc(sizeof(int) * 5);

    if (array) {
        puts("This malloc'ed array is not initialized:");

        for (i = 0; i < 7; i++) {
            printf("  array[%d] = %d\n", i, array[i]);
        }

        free(array);
    }
    
    char buffer[10];
    char input[20];

    printf("Enter a string: ");
    scanf("%s", input);

    strcpy(buffer, input);

    printf("Buffer content: %s\n", buffer);

    return 0;
}
