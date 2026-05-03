#include <stdio.h>

int main() {
    int islemTuru, sayi1, sayi2;
    float sonuc;

    printf("islem yapmak istedigin iki sayiyi gir: ");
    scanf("%d%d", &sayi1, &sayi2);

    printf("islemi sec: 1-toplama\n 2-cikarma\n 3-carpma\n 4-bolme\n 5-mod\n 6-yuzde\n   ");
    scanf("%d", &islemTuru);

    switch(islemTuru) {
        case 1:
            sonuc = sayi1 + sayi2;
            printf("sonuc=%f", sonuc);
            break;
        case 2:
            sonuc = sayi1 - sayi2;
            printf("sonuc=%f", sonuc);
            break;
        case 3:
            sonuc = sayi1 * sayi2;
            printf("sonuc=%f", sonuc);
            break;
        case 4:
            sonuc = sayi1 / sayi2;
            printf("sonuc=%f", sonuc);
            break;
        case 5:
            sonuc = sayi1 % sayi2;
            printf("sonuc=%f", sonuc);
            break;
        case 6:
            sonuc = (sayi1 * sayi2) / 100.0; // Doğru ondalıklı sonuç için 100.0 eklendi
            printf("sonuc=%f", sonuc);
            break;
    }

    return 0;
}
