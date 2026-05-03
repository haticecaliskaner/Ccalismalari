#include <stdio.h>

int main() {
    int sayilar[5];
    float ortalama;
    int toplam = 0;

    printf("lutfen bes tane sayi girin: \n");
    for(int i=0; i<5; i++){
        scanf("%d", &sayilar[i]);
    }

    for(int i=0; i<5; i++) {
        toplam += sayilar[i];
    }
    ortalama = (float)toplam / 5;

    printf("girdigin sayilarin ortalamasi: %.2f", ortalama);
    
    return 0;
}
