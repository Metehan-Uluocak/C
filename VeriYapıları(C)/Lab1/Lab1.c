#include <stdio.h>
#include <stdlib.h>

void SatirToplam(int matris[15][15], int satirTop[15]);
void SutunToplam(int matris[15][15], int sutunTop[15]);

int main() {
    int matris[15][15];
    int satirTop[15];
    int sutunTop[15];


    printf("Matris elemanlarini giriniz:\n");
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            scanf("%d", &matris[i][j]);
        }
    }


    SatirToplam(matris, satirTop);
    SutunToplam(matris, sutunTop);


    printf("Satir ve sutun toplamlari eslesen durumlar:\n");
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            if (satirTop[i] == sutunTop[j]) {
                printf("Satir %d, Sutun %d, Toplam %d\n", i + 1, j + 1, satirTop[i]);
            }
        }
    }


    printf("Ayni satir toplamlari:\n");
    for (int i = 0; i < 15; i++) {
        for (int j = i + 1; j < 15; j++) {
            if (satirTop[i] == satirTop[j]) {
                printf("Satir %d ve Satir %d, Toplam %d\n", i + 1, j + 1, satirTop[i]);
            }
        }
    }


    printf("Ayni sutun toplamlari:\n");
    for (int i = 0; i < 15; i++) {
        for (int j = i + 1; j < 15; j++) {
            if (sutunTop[i] == sutunTop[j]) {
                printf("Sutun %d ve Sutun %d, Toplam %d\n", i + 1, j + 1, sutunTop[i]);
            }
        }
    }

    return 0;
}

void SatirToplam(int matris[15][15], int satirTop[15]) {
    for (int i = 0; i < 15; i++) {
        satirTop[i] = 0;
        for (int j = 0; j < 15; j++) {
            satirTop[i] += matris[i][j];
        }
    }
}

void SutunToplam(int matris[15][15], int sutunTop[15]) {
    for (int j = 0; j < 15; j++) {
        sutunTop[j] = 0;
        for (int i = 0; i < 15; i++) {
            sutunTop[j] += matris[i][j];
        }
    }
}
