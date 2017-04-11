# include <stdbool.h>
# include <stdio.h>

int count(int a[], int size, int n){ 
    int aantal = 0;
    for (int i=0; i<size; i++){
        if (a[i] == n){
            aantal++;
        }
    }
    return aantal;
}
    
bool valid_row(int a[], int size){
    bool eisen;
    int achter_elkaar_een = 0;
    int achter_elkaar_nul = 0;
    
    int een = count(a, size, 1);
    int nul = count(a, size, 1);
    int aantal = een + nul;
    
    for (int i=0; i<size; i++){
        if (a[i] == 1 && a[i-1] == 1){
            achter_elkaar_een ++;
        } else if (a[i] == 0 && a[i-1] == 0){
            achter_elkaar_nul ++;
        } else{
            achter_elkaar_een = 0;
            achter_elkaar_nul = 0;
        }
    }
    if ((aantal == size) && (nul == een) && ((nul + een) == size) && (achter_elkaar_een < 2) && (achter_elkaar_nul < 2)) {
        eisen = 1;
    } else{
        eisen = 0;
    }
    
    return eisen;
}

int main()
{
    // De rij voldoet aan alle eisen
    // De rij bevat alleen nullen en enen
    // Het aantal enen is gelijk aan het aantal nullen
    // In de rij komt een getal niet drie keer achter elkaar voor
    int a[] = {1,1,0,0,1,0,1,0};        
    int size = sizeof(a)/sizeof(a[0]);
    bool eisen = valid_row(a, size);
    if (eisen == 1){
        printf("De int-rij voldoet aan alle eisen\n");
    } else{
        printf("De int-rij voldoet niet aan alle eisen\n");
    }
    
    // De rij bevat niet alleen enen en nullen
    a[0] = 3;
    a[3] = 5;
    size = sizeof(a)/sizeof(a[0]);
    eisen = valid_row(a, size);
    if (eisen == 1){
        printf("De int-rij voldoet aan alle eisen\n");
    } else{
        printf("De int-rij voldoet niet aan alle eisen\n");
    }
    
    // Het aantal enen is niet gelijk aan het aantal nullen
    a[0] = 1; 
    a[3] = 1;
    size = sizeof(a)/sizeof(a[0]);
    eisen = valid_row(a, size);
    if (eisen == 1){
        printf("De int-rij voldoet aan alle eisen\n");
    } else{
        printf("De int-rij voldoet niet aan alle eisen\n");
    }
    
    // In de rij komt een getal drie keer achter elkaar voor
    a[6] = 0;        
    size = sizeof(a)/sizeof(a[0]);
    eisen = valid_row(a, size);
    if (eisen == 1){
        printf("De int-rij voldoet aan alle eisen\n");
    } else{
        printf("De int-rij voldoet niet aan alle eisen\n");
    }
    
    return 0;
}