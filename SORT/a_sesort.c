#include <stdio.h>
#define N 6

//選択ソート
void sel_sort2(int d[], int top, int end) {
    int i, j, tmp;
    int pos;

    for(i = top; i < end; i++) {
        pos = i;
        tmp = d[pos];
        for(j = i + 1; j <= end; j++) {
            if(tmp > d[j]) {
                pos = j;
                tmp = d[pos];
            }
        }
        d[pos] = d[i]; d[i] = tmp;
    }
}

int main() {
    int i;
    int d[N] = {60, 40, 30, 10, 20, 50};

    sel_sort2(d, 0, N - 1);
    for(i = 0; i < N; i++){
        printf("%d ", d[i]);
    }
    printf("\n");

    return 0;
}