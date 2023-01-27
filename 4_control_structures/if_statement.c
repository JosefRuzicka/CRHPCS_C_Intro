#include <stdio.h>
#include <stdbool.h>
void main()
{
    int first_value;
    int second_value;

    bool first_value_is_even = false;
    bool second_value_is_even = false;

    printf("Insert an integer value\n");
    scanf("%d", &first_value);

    printf("Insert a second integer value\n");
    scanf("%d", &second_value);

    // if statements to check if input numbers are even or odd
    // making use of the modulo operator
    if (first_value % 2 == 0) {
        printf("%d is an even number\n", first_value);
        first_value_is_even = true;
    } else {
        printf("%d is an odd number\n", first_value);
    }

    if (second_value % 2 == 0) {
        printf("%d is an even number\n", second_value);
        second_value_is_even = true;
    }
    else if (second_value % 2 != 0)
    {
        printf("%d is an odd number\n", second_value);
    }

    // ternary conditional operator
    (first_value_is_even && second_value_is_even) ? printf("both numbers are even\n") : printf("at least one number is odd\n");
}
