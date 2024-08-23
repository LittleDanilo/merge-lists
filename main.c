#include <stdio.h>

int merge(int v1[], int v2[], int i1, int i2, int t) {
    if (i1 >= t && i2 >= t) return 0;
    if ((v1[i1] < v2[i2] && i1 < t) || i2 >= t) {
        printf("%d ", v1[i1]);
        merge(v1, v2, i1 + 1, i2, t);
    } else {
        printf("%d ", v2[i2]);
        merge(v1, v2, i1, i2 + 1, t);
    }
}

int main(void) {
    int v1[10] = {10,25,30,46,70,73,75,81,83,86};
    int v2[10] = {9,11,26,32,33,45,50,51,68,90};

    merge(v1, v2, 0, 0, 10);
    printf("\n");
    return 0;
}
