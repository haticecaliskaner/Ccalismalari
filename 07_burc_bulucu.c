#include <stdio.h>

int main() {
    int gun, ay, burc;
    burc = 0;

    printf("dogum gununuzu ve ayinizi sayi olarak girin: ");
    scanf("%d%d", &gun, &ay);
    
    if ((22 <= gun && ay == 1) || (gun <= 19 && ay == 2)) {
        burc = 1;
    }
    switch(burc) {
        case 1:
            printf("burcunuz kova");
            break;
    }

    if ((20 <= gun && ay == 2) || (20 >= gun && ay == 3)) {
        burc = 2;
    }
    switch(burc) {
        case 2:
            printf("burcunuz balik");
            break;
    }

    if ((21 <= gun && ay == 3) || (20 >= gun && ay == 4)) {
        burc = 3;
    }
    switch(burc) {
        case 3:
            printf("burcunuz koc");
            break;
    }
    
    if ((21 <= gun && ay == 4) || (21 >= gun && ay == 5)) {
        burc = 4;
    }
    switch(burc) {
        case 4:
            printf("burcunuz boga");
            break;
    }

    if ((22 <= gun && ay == 5) || (22 >= gun && ay == 6)) {
        burc = 5;
    }
    switch(burc) {
        case 5:
            printf("burcunuz ikizler");
            break;
    }
    
    if ((23 <= gun && ay == 6) || (22 >= gun && ay == 7)) {
        burc = 6;
    }
    switch(burc) {
        case 6:
            printf("burcunuz yengec");
            break;
    }
    
    if ((23 <= gun && ay == 7) || (22 >= gun && ay == 8)) {
        burc = 7;
    }
    switch(burc) {
        case 7:
            printf("burcunuz aslan");
            break;
    }
    
    if ((23 <= gun && ay == 8) || (22 >= gun && ay == 9)) {
        burc = 8;
    }
    switch(burc) {
        case 8:
            printf("burcunuz basak");
            break;
    }
    
    if ((23 <= gun && ay == 9) || (22 >= gun && ay == 10)) {
        burc = 9;
    }
    switch(burc) {
        case 9:
            printf("burcunuz terazi");
            break;
    }
    
    if ((23 <= gun && ay == 10) || (21 >= gun && ay == 11)) {
        burc = 10;
    }
    switch(burc) {
        case 10:
            printf("burcunuz akrep ");
            break;
    }
    
    if ((22 <= gun && ay == 11) || (21 >= gun && ay == 12)) {
        burc = 11;
    }
    switch(burc) {
        case 11:
            printf("burcunuz yay");
            break;
    }
    
    if ((22 <= gun && ay == 12) || (21 >= gun && ay == 1)) {
        burc = 12;
    }
    switch(burc) {
        case 12:
            printf("burcunuz oglak");
            break;
    }

    return 0;
}
