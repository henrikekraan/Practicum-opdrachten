#include <stdio.h>

int main()
{
    int n, i;
    
    printf("Typ een getal tussen 0 en 100: ");
    scanf("%d", &n);
    while(!( n>0 && n<100))
   {
        printf("Foute invoer\n");
        while(getchar() != '\n');
        printf("Typ een getal tussen 0 en 100: ");
        scanf("%d", &n);
    }
    for(i=1; i<=10; ++i)
    {
        printf("%2d * %2d = %3d \n", i, n, n*i);
    }
    
    return 0;
}