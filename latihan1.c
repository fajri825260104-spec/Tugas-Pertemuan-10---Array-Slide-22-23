
#include <stdio.h>

int main() {
    int angka[10];
    int ganjil[10], genap[10];
    int jumlahGanjil = 0, jumlahGenap = 0;
    int i;

    printf("=== PROGRAM BILANGAN GANJIL DAN GENAP ===\n");

    for (i = 0; i < 10; i++) {
        printf("Masukkan bilangan ke-%d: ", i + 1);
        scanf("%d", &angka[i]);

        if (angka[i] % 2 == 0) {
            genap[jumlahGenap] = angka[i];
            jumlahGenap++;
        } else {
            ganjil[jumlahGanjil] = angka[i];
            jumlahGanjil++;
        }
    }

    printf("\nDaftar bilangan ganjil:\n");
    if (jumlahGanjil == 0) {
        printf("Tidak ada bilangan ganjil.\n");
    } else {
        for (i = 0; i < jumlahGanjil; i++) {
            printf("%d ", ganjil[i]);
        }
        printf("\n");
    }

    printf("\nDaftar bilangan genap:\n");
    if (jumlahGenap == 0) {
        printf("Tidak ada bilangan genap.\n");
    } else {
        for (i = 0; i < jumlahGenap; i++) {
            printf("%d ", genap[i]);
        }
        printf("\n");
    }

    return 0;
}
