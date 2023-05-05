#include <stdio.h>

int main() {
    int dizi1[] = { 1, 3, 4, 5 };
    int n1 = sizeof(dizi1) / sizeof(int);
    int dizi2[] = { 2, 4, 6, 8 };
    int n2 = sizeof(dizi2) / sizeof(int);
    int dizi3 [n1 + n2];

    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (dizi1[i] < dizi2[j]) {
            dizi3[k++] = dizi1[i++];
        }
        else {
            dizi3[k++] = dizi2[j++];
        }
    }

    while (i < n1) {
        dizi3[k++] = dizi1[i++];
    }

    while (j < n2) {
        dizi3[k++] = dizi2[j++];
    }

    printf("Birleþtirilmiþ dizi: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", dizi3[i]);
    }
    printf("\n");

    return 0;
}