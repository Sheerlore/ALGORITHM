#include <stdio.h>
#define N 8

//クイックソート
void quick_sort(int d[], int top, int end) {
    int key, wk, i, j;

    key = d[(top + end) / 2];
    i = top - 1;
    j = end + 1;
    while(1) {
        while(d[++i] < key);
        while(d[--j] > key);
        if(i >= j) break;
        wk = d[i];
        d[i] = d[j];
        d[j] = wk;
    }
    if(top < i - 1) quick_sort(d, top, i - 1);
    if(j + 1 < end) quick_sort(d, j + 1, end);
}

int main() {
    int i;
    int d[N] = {60, 20, 10, 50, 30, 40 ,80, 70};

    quick_sort(d, 0, N-1);
    for(i = 0; i < N; i++) printf("%d ", d[i]);
    printf("\n");

    return 0;
}