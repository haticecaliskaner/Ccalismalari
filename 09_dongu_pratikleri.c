#include <stdio.h>

int main() {
    // 1. Pratik: 15'e bölünenler
    printf("--- 15 e tam bolunen sayilar (47-120 arasi) ---\n");
    for(int i=47; i<121; i++) {
        if(i % 15 == 0){
            printf("%d\n", i);
        }
    }

    // 2. Pratik: Faktöriyel (While ile)
    int n, k;
    int faktoriyel = 1;
    printf("\n--- Faktoriyel Hesaplama ---\nSayi gir: ");
    scanf("%d", &n);

    if(n < 0) {
        printf("negatif sayilarin faki hesaplanmaz\n");
    } else {
        k = n;
        while(k > 0) {
            faktoriyel = faktoriyel * k;
            k--;
        }
        printf("%d! = %d\n", n, faktoriyel);
    }

    // 3. Pratik: Fibonacci Serisi (For ile)
    int terim, a = 0, b = 1, sonraki;
    printf("\n--- Fibonacci Serisi ---\nKac terim gormek istersin: ");
    scanf("%d", &terim);

    printf("Fibonacci: ");
    for(int i=1; i<=terim; i++) {
        printf("%d ", a);
        sonraki = a + b;
        a = b;
        b = sonraki;
    }
    printf("\n");

    return 0;
}
