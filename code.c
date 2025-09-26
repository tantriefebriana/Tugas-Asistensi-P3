#include <stdio.h>

void Binary (int n) {
    int bit[32], i = 0;
    while (n > 0) {
        bit[i++] = n % 2;
        n /= 2;
    }
    if (i == 0) i = 1;
    while (i % 4 != 0)
        bit[i++] = 0;

    int j;
    for (j = i - 1; j >= 0; j--) {
    printf("%d", bit[j]);
    if (j % 4 == 0 && j != 0) printf(" ");
}

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
    Binary(n);
    printf("\nJenis   : %s\n", cekGenapGanjil(n));
    return 0;
}
