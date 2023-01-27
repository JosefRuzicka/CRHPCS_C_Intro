#include <stdio.h>
#include <stdlib.h>
void main() {
    int value_count = 10;

    // malloc allocates uninitialized memory
    // calloc allocates memory initialized with 0 
    int* ptr = (int*)malloc(value_count * sizeof(int));
    //int* ptr = (int*)calloc(value_count, sizeof(int));

    if (ptr != NULL) {
        printf("Memory allocated successfully\n"); 
    } else { 
        printf("Memory allocation failed\n");
    }

    // realloc re-allocates memory, useful when previously allocated memory is insufficient
    ptr = realloc(ptr, (value_count+5) * sizeof(int));
    
    printf("Memory re-allocated successfully\n"); 
    // memory de-allocation
    free(ptr);

    printf("Memory de-allocated successfully\n"); 
}


