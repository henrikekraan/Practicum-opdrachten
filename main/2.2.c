#include <stdio.h>

int main()
{
    char s1[80], s2[80];
    
    printf("typ zin 1 (max 80 karakters): ");
    fgets(s1,80,stdin);
    fflush(stdin);
    printf("typ zin 2 (max 80 karakters): ");
    fgets(s2,80,stdin);
   /*
    int len;
    int len_s1 = sizeof(s1)/sizeof(s1[0]);
    int len_s2 = sizeof(s2)/sizeof(s2[0]);
    printf("lengte s1: %d", len_s1);
    
    if (len_s1 > len_s2)
        len = len_s1;
    else
        len = len_s2;
    */
    for (int i=0; i<80; i++)
    {
        if (s1[i] == s2[i])
        {
            continue;
        }
        else
        {
            printf("Het verschil in de tekst begint bij index %d", i);
            break;
        }
        
    }
    return(0);
}
