#include <stdio.h>

void transpose_matrix(int size, int matrix[][size]){
    int i, j, transpose[size][size];
    for (i=0; i<size; i++){
        for (j=0; j<size; j++){
            transpose[j][i] = matrix[i][j];
        }
    }
    for (int i=0; i<size; i++){
        for (int j=0; j<size; j++){
            printf("%d", transpose[i][j]);
        }
        printf("\n");
    }
}
    
int main(void)
{
    int matrix[][3] =  {{1,1,1},
                        {2,2,2},
                        {3,3,3}};
    int size = (sizeof(matrix)/(sizeof(matrix[0])));
    
    transpose_matrix(size, matrix);
    
    return 0;
}