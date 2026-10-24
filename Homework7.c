#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

int zd3();

int main() {
    setlocale(LC_CTYPE, ".UTF-8");

    zd3();

    return 0;
}

int zd3() {
    int k;

    scanf("%d", &k);

    switch (k) {
    case 1:
        printf("в программе найдено %d ошибка\n", k);
        break;

    case 2:
    case 3:
    case 4:
        printf("в программе найдено %d ошибки\n", k);
        break;

    default:
        printf("в программе найдено %d ошибок\n", k);
        break;
    }

    return 0;
}