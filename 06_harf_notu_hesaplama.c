#include <stdio.h>

int main() {
    int sinavNotu;
    
    printf("sinav notunu giriniz: ");
    scanf("%d", &sinavNotu);

    if (sinavNotu >= 90 && sinavNotu <= 100) {
        printf("AA ile gectin");
    } else if (sinavNotu >= 85 && sinavNotu <= 89) {
        printf("BA ile gectin");
    } else if(sinavNotu >= 80 && sinavNotu <= 84) {
        printf("BB ile gectin");
    } else if(sinavNotu >= 75 && sinavNotu <= 79) {
        printf("CB ile gctin");
    } else if(sinavNotu >= 65 && sinavNotu <= 74) {
        printf("CC ile gectin");
    } else if(sinavNotu >= 60 && sinavNotu <= 64) {
        printf("DC ile gectin");
    } else if(sinavNotu >= 55 && sinavNotu <= 59) {
        printf("DD ile kaldin");
    } else if (sinavNotu >= 50 && sinavNotu <= 54) {
        printf("FD ile kaldin");
    } else if (sinavNotu >= 0 && sinavNotu <= 49) {
        printf("FF ile kaldin");
    } else {
        printf("Gecersiz not veya devamsizlik");
    }
    
    return 0;
}
