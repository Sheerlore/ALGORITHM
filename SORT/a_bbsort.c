#include <stdio.h>
#define N 6

//バブルソート
void bubble_sort(int d[], int top, int end) {
    int i, j,wk;

    for(i = top; i < end; i++) {
        for(j = end; j > i; j--) {
            if(d[j - 1] > d[j]) {
                wk = d[j - 1];
                d[j - 1] = d[j];
                d[j] = wk;
            }
        }
    }
}

int main() {
    int i;
    int d[N] = {30, 20, 60, 10, 50, 40};

    bubble_sort(d, 0, N - 1);
    for (i = 0; i < N; i++) {
        printf("%d ", d[i]);
    }
    printf("\n");

    return 0;
}