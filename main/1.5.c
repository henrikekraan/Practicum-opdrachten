#include <stdio.h>

int main()
{
    int i = 0;
    char ch, first_ch;
    
    printf("Typ een getal begin met - of +: ");
    
    first_ch = getchar();
    while(ch != '\n')
    {
        if(ch <= '9' && ch >= '0')
        {
            i = i * 10 + (ch - '0');
        }
        else if((ch == first_ch) && (ch == '-' || ch == '+'))
        {
            i=0;
        }
        else
        {
            printf("Foute invoer\n");
            ch = getchar();
        }
        ch = getchar();
    }
    if (first_ch == '-')
        i *= -1;
        
    printf("Het ingevoerde getal is: %d\n", i);
    
    return 0;
}