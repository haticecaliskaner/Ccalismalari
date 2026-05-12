#include <stdio.h>

int main() {
    int a[10] = {6, 25, 36, 41, 61, 45, 3, 33, 44, 11};
    int max = a[0];
    int min = a[0];
    int maxIdx = 0;
    int minIdx = 0;

    for (int i = 1; i < 10; i++) {
        if (a[i] > max) {
            max = a[i];
            maxIdx = i;
        }
        if (a[i] < min) {
            min = a[i];
            minIdx = i;
        }
    }

    printf("min indeksi: %d, min: %d\n", minIdx, min);
    printf("max indeksi: %d, max: %d\n", maxIdx, max);

    return 0;
}
