
#include <stdio.h>

int main() {
    float suhu[7];
    float total = 0;
    float rataRata, terdingin, terpanas;
    int i;

    printf("=== PROGRAM TEMPERATUR 7 HARI ===\n");

    for (i = 0; i < 7; i++) {
        printf("Masukkan temperatur hari ke-%d: ", i + 1);
        scanf("%f", &suhu[i]);

        total += suhu[i];

        if (i == 0) {
            terdingin = suhu[i];
            terpanas = suhu[i];
        } else {
            if (suhu[i] < terdingin) {
                terdingin = suhu[i];
            }

            if (suhu[i] > terpanas) {
                terpanas = suhu[i];
            }
        }
    }

    rataRata = total / 7;

    printf("\n=== HASIL PENGUKURAN ===\n");
    printf("Temperatur selama 7 hari:\n");

    for (i = 0; i < 7; i++) {
        printf("Hari ke-%d: %.2f derajat\n",
               i + 1, suhu[i]);
    }

    printf("\nSuhu rata-rata : %.2f derajat\n", rataRata);
    printf("Suhu terdingin : %.2f derajat\n", terdingin);
    printf("Suhu terpanas  : %.2f derajat\n", terpanas);

    return 0;
}
