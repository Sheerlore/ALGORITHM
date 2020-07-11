#include <stdio.h>
#define N 9

//シェーカーソート
void shaker_sort(int d[], int top, int end) {
    int i, wk;
    int lft_pos, rgt_pos, last_cng_pos;

    lft_pos = top;
    rgt_pos = end;
    last_cng_pos = end;

    while(lft_pos < rgt_pos) {
        for(i = lft_pos; i < rgt_pos; i++) {
            if(d[i] > d[i + 1]){
                wk = d[i];
                d[i] = d[i + 1];
                d[i + 1] = wk;
                last_cng_pos = i;
            }
        }
        rgt_pos = last_cng_pos;
        for(i = rgt_pos; i > lft_pos; i--) {
            if(d[i - 1] > d[i]) {
                wk = d[i - 1];
                d[i - 1] = d[i];
                d[i] = wk;
                last_cng_pos = i;
            }
        }
        lft_pos = last_cng_pos;
    }
}

int main() {
    int i;
    int d[N] = {90, 30, 20, 60, 10, 50, 60, 40, 70};

    shaker_sort(d, 0, N - 1);
    for(i = 0; i < N; i++) {
        printf("%d ", d[i]);
    }
    printf("\n");

    return 0;
}