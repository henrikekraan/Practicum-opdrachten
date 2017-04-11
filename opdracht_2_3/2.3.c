#include <stdio.h>
#include <string.h>

int main()
{
    char array[80];
    printf("tik een string in: ");
    fgets(array, 80, stdin);
    
    int len = strlen(array)-1;
    int end = len - 1;
    
    // char-array in omgekeerde volgorde dmv incices
    for (int i= 0; i<(len/2); i++){
        char temp = array[end-i];
        array[end-i] = array[i];
        array[i]= temp;
    }
    printf("In omgekeerde volgorde: %s", array);
    
    // char-array in omgekeerde volgorde dmv pointers
    // dit wordt dus weer de originele char-array
    for (int j=0; j<(len/2); j++){
        char temp = *(array+ end -j);
        *(array + end - j) = *(array +j);
        *(array + j) = temp;
    }
    printf("In omgekeerde volgorde: %s", array);
    return 0;
}