#include<stdio.h>

int main()
{
    int matrix[][10] = {{-1,-1,-1,-1,-1,-1, 0, 1,-1, 1},
                        { 1,-1,-1,-1,-1,-1,-1,-1,-1, 1},
                        {-1,-1, 0,-1, 1,-1,-1,-1,-1,-1},
                        {-1,-1,-1,-1, 0,-1,-1,-1,-1,-1},   
                        {-1,-1,-1,-1,-1,-1, 0,-1,-1, 1},   
                        {-1,-1,-1,-1,-1, 1,-1,-1, 1,-1},   
                        {-1,-1,-1,-1,-1,-1, 0,-1,-1, 0},   
                        { 0,-1,-1,-1,-1,-1,-1,-1,-1,-1},   
                        {-1,-1, 1, 1,-1,-1,-1,-1,-1, 1},   
                        { 0,-1, 1,-1,-1,-1,-1,-1, 0,-1}};
    
    int i, j;
    for (i=0; i<10; i++){
        for (j=0; j<10; j++){
            if (matrix[i][j] == -1){
                putchar('-');
            }
            else{
                printf("%d", matrix[i][j]);
            }
            }
                    printf("\n");
        }
}