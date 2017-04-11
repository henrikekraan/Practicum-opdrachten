#include <stdio.h>

int main(void)
{
    int i, j;
    printf("Vul een getal in: ");
    int a = scanf("%d", i);
    
    printf("Vul nog een getal in");
    int b = scanf("%d", j);
    int c = a+b ;
    printf("%d + %d = %d", a, b, c);
    
return(0);
}
    