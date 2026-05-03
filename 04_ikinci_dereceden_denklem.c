#include <stdio.h>

int main() {
    int a, b, c, delta;

    printf("lutfen a, b, c katsayilarini girin: ");
    scanf("%d%d%d", &a, &b, &c);

    delta = (b * b - 4 * a * c);
    
    if (delta < 0) {
        printf("denklemin koku yok");
    } else if (delta > 0) {
        printf("denklemin birden fazla koku var");
    } else {
        printf("denklemin bir koku var");
    }

    return 0;
}
