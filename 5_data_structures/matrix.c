#include <stdio.h>

void main()
{
    // matrix initialization
    int matrix[3][3] = {{1,2,3},
                        {4,5,6},
                        {7,8,9}};
                        
    int matrix_transposed[3][3];
                        
    int matrix_row_length = sizeof(matrix)/sizeof(matrix[0]);
    int matrix_column_length = sizeof(matrix[0])/sizeof(matrix[0][0]);

    // transpose matrix
    for (int row = 0; row < matrix_row_length; row++) {
        for (int col = 0; col < matrix_column_length; col++) {
            matrix_transposed[col][row] = matrix[row][col];
        }
    }
    
    // print matrix
    for (int row = 0; row < matrix_row_length; row++) {
        for (int col = 0; col < matrix_column_length; col++) {
            printf("%d ",matrix_transposed[row][col]);
        }
        printf("\n");
    }
}
