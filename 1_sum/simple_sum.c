#include <stdio.h>

int sum(int num_a, int num_b);
int sum_simple_code(int num_a, int num_b);

void main(){
    int my_sum = sum(5, 2);
    int my_simple_code_sum = sum_simple_code(5, 2);
    printf("my_sum: %d\n", my_sum);
    printf("my_simple_code_sum: %d\n", my_sum); 
}

int sum(int num_a, int num_b)
{
    // local variable declaration
    int result;
    
    // local variable initialization
    result = 0;
    
    result = num_a + num_b;
    
    
    return result;
}

int sum_simple_code(int num_a, int num_b)
{
    // result = num_a + num_b;
    // return result;
    
    return num_a + num_b; 
}
