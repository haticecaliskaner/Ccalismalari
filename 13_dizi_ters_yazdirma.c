#include <stdio.h>

int main() {
    int dizi[5];
    
    for (int i = 0; i < 5; i++) {
        printf("%d. sayiyi girin: ", i + 1);
        scanf("%d", &dizi[i]);
    }

    printf("Ters sirali dizi:\n");
    for (int i = 4; i >= 0; i--) {
        printf("%d ", dizi[i]);
    }

    return 0;
}
