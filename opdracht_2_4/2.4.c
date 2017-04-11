#include <stdio.h>
#include <string.h>

typedef struct voorwerp
{
    int nummer;
    char naam[20];
    double gewicht, lengte;
}   VOORWERP;

int main(void)
{
    VOORWERP art1;
    
    printf("nummer: ");
    fflush(stdout);
    while(!scanf("%d", &art1.nummer)) {
        printf("foutieve invoer\n");
        while(getchar() != '\n')
            ; // sla rest van regel over
        printf("nummer: ");
    }
    
    printf("naam: ");
    fflush(stdin);
    fgets(art1.naam,20,stdin);
    int len = strlen(art1.naam);
    if (art1.naam[len-1] == '\n') {
        art1.naam[len-1] = '\0'; // verwijder '\n' uit string
    } else {
        while (getchar() != '\n')
            ; // skip rest van regel
    }
    
    printf("gewicht: ");
    fflush(stdout);
    while(!scanf("%lf", &art1.gewicht)) {
        printf("foutieve invoer\n");
        while(getchar() != '\n')
            ; // sla rest van regel over
        printf("gewicht: ");
    }
    
    printf("lengte: ");
    fflush(stdout);
    while(!scanf("%lf", &art1.lengte)) {
        printf("foutieve invoer\n");
        while(getchar() != '\n')
            ; // sla rest van regel over
        printf("lengte: ");
    }
    
    //VOORWERP art1 = {num, naa, gew, leng};
    printf("%s heeft nummer %d, weegt %lf kg en is %lf cm", art1.naam, art1.nummer, art1.gewicht, art1.lengte);
        
    
}
