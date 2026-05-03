#include <stdio.h>

int main() {
    const float pi = 3.14;
    int yaricap;
    float cevre;
    float alan;

    printf("yaricap girin: ");
    scanf("%d", &yaricap);
    
    cevre = (2 * pi * yaricap);
    alan = (pi * yaricap * yaricap);
    
    printf("cevre: %f alan: %f", cevre, alan);
    
    return 0;
}
