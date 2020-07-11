#include <stdio.h>
#define N 6


// 単純ソート
void ba_sort(int d[], int top, int end) {
    int i, j, wk;

    for(int i = top; i < end; i++) {
        for(j = i + 1; j <= end; j++) {
            if(d[i] > d[j]) {
                wk = d[i];
                d[i] = d[j];
                d[j] = wk;
            }
        }
    }
}

int main() {
    int i;
    int d[N] = {60, 40, 30, 10, 20, 50};

    ba_sort(d, 0, N - 1);
    for(i = 0; i < N; i++){
        printf("%d ", d[i]);
    }
    printf("\n");

    return 0;
}