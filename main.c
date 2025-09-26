#include <stdio.h>


void Binary(int n) {
    if (n > 1) {
        Binary(n / 2);
    }
    printf("%d", n % 2);
}

const char* cekGenapGanjil(int n) {
    return (n % 2 == 0) ? "Genap" : "Ganjil";
}

int main() {
    int n;

    printf("Masukkan bilangan desimal: ");
    scanf("%d", &n);

    printf("Desimal : %d\n", n);
    printf("Biner   : ");
    if (n == 0) {
        printf("0");
    } else {
        Binary(n);
    }
    printf("\nJenis   : %s\n", cekGenapGanjil(n));

    return 0;
}

