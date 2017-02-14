#include <stdio.h>

int main()
{
    int n;
    printf("Typ een getal tussen 1 en 80: ");
    
    scanf("%d", &n);
    for(int i=1; i<=n; ++i)
    {
        for (int j=1; j<=i; ++j)
            {
                printf("*");
            }
        printf("\n");
    }
    for(int i=n-1; i>=1; --i)
    {
        for(int j=1; j<=i; ++j)
        {
            printf("*");
        }
        printf("\n");
    }
    int m;
    printf("Typ een getal tussen 1 en 80: ");
    
    scanf("%d", &m);
    int i=1;
    int j=1;
    while(i<=m)
    {
        while(j<=i)
        {
            printf("*");
            j++;
        }
        printf("\n");
        j=1;
        i++;
    }
    i = 1;
    j = m-1;
    while(i<=m)
    {
        while (j>=i)
        {
            printf("*");
            j--;
        }
        printf("\n");
        j = m-1;
        i++;
    }
return(0);
}
