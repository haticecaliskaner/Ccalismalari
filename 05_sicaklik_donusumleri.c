#include <stdio.h>

int main() {
    int cel;
    float fah;
    float kel;

    printf("cel degeri girin: ");
    scanf("%d", &cel);

    fah = (cel * 1.8);
    kel = (cel + 273);

    printf("girdigin degerin fah degeri: %.2f\n", fah);
    printf("girdigin degerin kel degeri: %.2f\n", kel);

    return 0;
}
