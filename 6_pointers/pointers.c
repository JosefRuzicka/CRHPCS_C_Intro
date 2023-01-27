#include <stdio.h>

void value_add(int);
void value_add_ptr(int*);

void main() {
    int value = 0;
    
    // pointer to value's address
    int* value_pointer = &value;

    value_add(value);
    printf("value add: %d\n", value);

    value_add_ptr(value_pointer);
    printf("value add ptr: %d\n", value);
}

void value_add (int value) {
    value++; // note that this function's value is a copy of main's value.
}

void value_add_ptr (int *value) {
   (*value)++;
   //*value++; this increments the address pointed at by the pointer by 1.
}
