#include <stdio.h>

// Asal kontrolü yapan özyinelemeli fonksiyon
int asal_mi(int sayi, int bolen) {
    if (sayi < 2) return 0;
    if (bolen * bolen > sayi) return 1;
    if (sayi % bolen == 0) return 0;
    return asal_mi(sayi, bolen + 1);
}

// n. Fibonacci terimini bulan özyinelemeli fonksiyon
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    // Recursive Asal Testi
    int n;
    printf("Asal kontrolu icin bir sayi girin: ");
    scanf("%d", &n);
    if (asal_mi(n, 2)) printf("%d asal bir sayidir.\n", n);
    else printf("%d asal degildir.\n", n);

    // Recursive Fibonacci Testi
    int sinir;
    printf("\nFibonacci serisi icin kacinci terime kadar yazdirilsin?: ");
    scanf("%d", &sinir);
    printf("Fibonacci Serisi: ");
    for (int i = 0; i < sinir; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
