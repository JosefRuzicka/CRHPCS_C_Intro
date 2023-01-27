#include <stdio.h>

void main()
{
    // array initialization
    int array[5] = {1,2,3,4,4};
    
    // pseudo code: array_length = (memory used by array) / (memory size of int data type)
    int array_length = sizeof(array)/sizeof(array[0]); 
    
    array[4] = 5; // array = {1,2,3,4,5}
    
    int array_sum = 0;
    
    // print array, and calculate the sum of its values
    for (int i = 0; i < array_length; i++) {
        printf("%d ", array[i]);
        array_sum += array[i];
    }
    printf("\nSum of array values: %d\n", array_sum);
    
    /* subtract 1 from array_sum in each iteration while
     * array_sum is greater or equal than 10 */
    while (array_sum >= 10) {
        array_sum--;
        printf("array_sum: %d\n", array_sum);
    }
    printf("end of while loop\n");
    
    /* subtract 1 from array_sum in each iteration while
     * array_sum is less than 5.
     * note that the condition is not met */
    do {
        array_sum--;
        printf("array_sum: %d\n", array_sum);
    } while (array_sum < 5);
}
