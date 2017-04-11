#include <stdio.h>

int main()
{
    int nul=0, een=0;
    int a[10];
    
    for (int i=0; i < 10; i++)
    {
        printf("Typ een 0 of 1: \n");
        scanf("%d", &a[i]);
        if (a[i] == 0)   
            nul +=1;
        else if (a[i] == 1)
            een +=1;
        else
        {
            printf("Foute invoer!");
            break;
        }
    }
    if (a[9]== 0 | a[9] == 1)
    {    
        if (nul==een)
            printf("Het aantal nullen en enen is gelijk");
        else
            printf("Het aantal nullen en enen is niet gelijk");
    }
    return(0);
}