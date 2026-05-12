#include <stdio.h>

int sayacOku() {
    FILE *fp = fopen("sayac.dat", "r");
    if (fp == NULL) return 0;

    int sayi;
    fscanf(fp, "%d", &sayi);
    fclose(fp);
    return sayi;
}

void sayacYaz(int sayi) {
    FILE *fp = fopen("sayac.dat", "w");
    if (fp == NULL) {
        perror("Hata");
        return;
    }
    fprintf(fp, "%d", sayi);
    fclose(fp);
}

int main() {
    int ziyaretci = sayacOku();
    ziyaretci++;

    printf("Hos geldiniz! Siz %d. ziyaretcisiniz.\n", ziyaretci);

    sayacYaz(ziyaretci);

    return 0;
}
