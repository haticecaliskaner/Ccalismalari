#include <stdio.h>
#include <stdlib.h>

int main() {
    int vizeNotu;
    int finalNotu;
    int projeNotu;
    float ortalamaNotu;

    printf("vize notunu gir: ");
    scanf("%d", &vizeNotu);

    printf("final notunu gir: ");
    scanf("%d",&finalNotu);

    printf("proje notunu gir: ");
    scanf("%d", &projeNotu);

    ortalamaNotu = (vizeNotu * 0.3) + (finalNotu * 0.5) + (projeNotu * 0.2);

    printf("vize notu %d final notu %d proje notu %d olan ogrencinin yil sonu ortalamasi= %.2f", vizeNotu, finalNotu, projeNotu, ortalamaNotu);

    return 0;
}
