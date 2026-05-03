#include <stdio.h>

int main() {
    int akim;
    int direnc;
    float gerilim;

    printf("akim ve direnc degerlerini girin: ");
    scanf("%d%d", &akim, &direnc);
    gerilim = akim * direnc;
    
    printf("gerilimin degeri: %.0f\n", gerilim);
    
    return 0;
}
