#include <stdio.h>

// Mükemmel Sayı Kontrolü
int mukemmel(int sayi) {
    int toplam = 0;
    for(int i=1; i<=(sayi/2); i++) {
        if(sayi % i == 0)
            toplam += i;
    }
    return (toplam == sayi);
}

// Asal Sayı Kontrolü
void asalKontrolEt(int n) {
    int asalMi = 1;
    if (n <= 1) {
        printf("%d asal degildir.\n", n);
        return;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            asalMi = 0;
            break;
        }
    }
    if (asalMi == 1) printf("%d asal bir sayidir.\n", n);
    else printf("%d asal degildir.\n", n);
}

// Pointer ile Değer Değiştirme (Swap)
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    printf("--- Mukemmel Sayi --- \n");
    int sayi;
    printf("Sayi girin: ");
    scanf("%d", &sayi);
    if (mukemmel(sayi)) printf("sayi mukemmeldir\n");
    else printf("sayi mukemmel degildir\n");

    printf("\n--- Asal Sayi ---\n");
    asalKontrolEt(sayi);

    printf("\n--- Pointer Swap ---\n");
    int x = 3, y = 5;
    printf("Degisim Oncesi: x=%d, y=%d\n", x, y);
    swap(&x, &y);
    printf("Degisim Sonrasi: x=%d, y=%d\n", x, y);

    return 0;
}
