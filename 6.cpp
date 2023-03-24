#include <stdio.h>

int main() {
    int a, b, c, mod, z, k, d, h, y;
    printf("Iki Sayinin Toplamindan Kalan Bulma\n");
    printf("***********************************\n");
    printf("a ve b degerlerini giriniz:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Hangi Yontemle Hesaplatmak Istersiniz?\n1.Dort Islemle Hesaplama\n2.Modla Hesaplama\n");
    scanf("%d", &y);

    z = 12;
    c = a + b;


    if (y == 2) {
        if (c >= 12) {
            mod = c % z;
            printf("Kalan: %d\n", mod);
        }
        else {
            printf("Girilen Degerlerin Toplami 12 den Kucuk!\n");
        }
    }
    else if (y == 1) {
        if (c >= 12) {
            k = c / z;
            d = k * z;
            h = c - d;
            printf("Kalan: %d\n", h);
        }
        else {
            printf("Girilen Degerlerin Toplami 12 den Kucuk!\n");
        }
    }
    else {
        printf("Hatali Islem Yaptiniz !\n");
    }

    printf("***********************************\n");
    return 0;
}


