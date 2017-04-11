#include <stdio.h>
#include <stdbool.h>

int get_bit(char ch, int n){
    int bit;
    ch<<=n;
    
    if (ch & 0x80){
        bit = 1;
    }else{
        bit = 0;
    }
    return bit;
}

char verschuif_cyclisch( char ch, int n){
    if (n>0){
        for (int i=0; i<n; i++){
            if ((ch & 0x80) == 0x80){
                ch<<= 1;
                ch |= 1;
            }else if ((ch & 0) == 0){
                ch<<= 1;
                ch |= 0;
            }
        }
    }else if (n<0){
        for (int m=8; m<32; m++){
            ch &= ~(1<<m);
            
        }
        for (int i=0; i>n; i--){
            if ((ch & 0x1) == 0x1){
                ch>>= 1;
                ch |= (0x80);
                
            }else if ((ch & 0x1)== 0){
                ch>>= 1;
                ch ^=(0x80);
            }
        }
    }
    return ch;
}

int main(void)
{
    int ch = 0x6b;      //01101011
    
    for (int n=0; n<8; n++){
        int bit = get_bit(ch, n);
        printf("De bitwaarde van bit %d van byte %#x is %d\n", n, ch, bit);
    }
    ch = 0x6b;
    // voor n van -7 tot 8 de verschuiving van n posities naar links (n>0) dan wel rechts (n<0)
    // volgorde: 7,6,5,4,3,2,1 naar rechts dan 0 en daarna 1,2,3,4,5,6,7 naar links
    for (int n=-7; n<8; n++){
        int geschoven = verschuif_cyclisch(ch, n);
        for (int m=0; m<8; m++){
            bool binair = get_bit(geschoven, m);
            printf("%d", binair);
        }
        putchar('\n');
    }
    return 0;
}