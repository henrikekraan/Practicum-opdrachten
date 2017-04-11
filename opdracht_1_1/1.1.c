#include <stdio.h>

int main()
{
    int x, y;
    
    printf("Typ twee cijfers: \n");
        
    while ((scanf("%d", &x) != 1) || (scanf("%d", &y) != 1))
    {
        getchar();
        printf("Incorrecte input: probeer opnieuw\n");
    }
    int z = x + y;
    
    printf("%d + %d = %d\n", x, y, z);
    
    return 0;
}