#include <stdio.h>

int main()
{
    char c;
    printf("Typ een teken: ");
    c = getchar();
    if (c >= 97 && c <= 122)
    {    
        printf("ASCII-waarde decimaal: %d\n", c);
    }
    else if (c >= 65 && c <= 90)
    {
        printf("ASCII-waarde hexadecimaal: %x\n", c);
    }
    else
    {
        printf("Het teken is: ");
        putchar(c);
    }
    return(0);    
}