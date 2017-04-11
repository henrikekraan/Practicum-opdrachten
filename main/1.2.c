#include <stdio.h>

int main()
{
    char c;
    printf("Typ een teken: ");
    c = getchar();
    if (c >= 'a' && c <= 'z')
    {    
        printf("ASCII-waarde decimaal: %d\n", c);
    }
    else if (c >= 'A' && c <= 'Z')
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