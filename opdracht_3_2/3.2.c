#include <stdio.h>
#include <stdbool.h>

bool equal_rows(int a1[], int a2[], int size){
    bool gelijk = 1;
    for (int i=0; i<size; i++){
        if (a1[i] != a2[i]){
            gelijk = 0;
            break;
        }
    }
    return gelijk;
}

int main()
{
    // vergelijk twee int-rijen die niet aan elkaar gelijk zijn
    int a1[] = {1, 1, 1}; 
    int a2[] = {1, 2, 1};
    int size_a1 = sizeof(a1) / sizeof(a1[0]);
    int size_a2 = sizeof(a2) / sizeof(a2[0]);
    int size = 0;
    
    if  (size_a1 == size_a2){
        size = size_a1;
    }
    bool gelijk = equal_rows(a1, a2, size);
    
    if (gelijk == 1){
        printf("De twee int-rijen zijn aan elkaar gelijk\n");
    } else{
    printf("De twee int-rijen zijn niet aan elkaar gelijk\n");
    }
    
    // vergelijk twee int-rijen die aan elkaar gelijk zijn
    a2[1] = 1;
    size_a1 = sizeof(a1) / sizeof(a1[0]);
    size_a2 = sizeof(a2) / sizeof(a2[0]);
    size = 0;
    
    if (size_a1 == size_a2){
        size = size_a1;
    } 
    gelijk = equal_rows(a1, a2, size);
    
    if (gelijk == 1){
        printf("De twee int-rijen zijn aan elkaar gelijk\n");
    } else{
    printf("De twee int-rijen zijn niet aan elkaar gelijk\n");
    }
    return 0;
}