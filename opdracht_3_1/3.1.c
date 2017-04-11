#include <stdio.h>

int count(int a[], int size, int n){ 
    int aantal = 0;
    for (int i=0; i<size; i++){
        if (a[i] == n){
            aantal++;
        }
    }
    return aantal;
}

int main(void)
{
    int a[] = {1,2,3,4,1};
    int size = sizeof(a)/sizeof(a[0]);
    int n = 1;
    printf("aantal is %d\n", count(a, size, n));    // 1 komt 2 maal voor in de int-rij
    a[2] = 1;                                       // de 3 wordt nu ook een 1
    printf("aantal is %d\n", count(a, size, n));    // 1 komt 3 maal voor in de int-rij
    return 0;
}

