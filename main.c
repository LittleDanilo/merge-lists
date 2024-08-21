#include <stdio.h>

int merge(int v1[], int v2[], int i1, int i2) {
    if (i1 >= 6 && i2 >= 6) return 0;
    else if ((v1[i1] < v2[i2] && i1 < 6) || i2 > 5) {
        printf("%d ", v1[i1]);
        merge(v1, v2, i1 + 1, i2);
    } else if ((v2[i2] < v1[i1] && i2 < 6) || i1 > 5){
        printf("%d ", v2[i2]);
        merge(v1, v2, i1, i2 + 1);
    }
}

int main(void) {
    int v1[6] = {0,1,2,3,4,5};
    int v2[6] = {10,11,12,13,14,15};

    merge(v1, v2, 0, 0);
    printf("\n");
    return 0;
}