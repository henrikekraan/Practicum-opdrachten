#include <stdio.h>
#include <stdbool.h>

int main()
{
    int i = 0;
    char ch, first_ch;
    int valid = true;
    
    printf("Typ een getal begin met - of +: ");
    
    ch = first_ch = getchar();
    while(ch != '\n')
    {
        if(ch <= '9' && ch >= '0')
        {
            i = (i * 10 )+ (ch - '0');
        }
        else if((ch == first_ch) && (ch == '-' || ch == '+'))
            ;
        else
        {
            printf("Foute invoer\n");
            valid = false;
        }
        ch = getchar();
    }
    if (valid) 
    {
        if (first_ch == '-')
        {
        i *= -1;
        printf("Het ingevoerde getal is: %d\n", i);
        }
        else
        {
        printf("Het ingevoerde getal is: %d\n", i);
        }
    }
    return 0;
}