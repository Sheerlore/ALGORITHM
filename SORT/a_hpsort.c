#include <stdio.h>
#define N 11

//ヒープソート
void heap_sort(int d[], int end){
    int i, wk;
    int oya, ko;

    //初期ヒープを作る
    for(i = end / 2; i >= 1; i--) {
        oya = i;
        ko = oya * 2;
        while(ko <= end){
            if(ko < end && d[ko] < d[ko + 1] )
                ++ko;
            if(d[oya] >= d[ko]) break;
            wk = d[oya];
            d[oya] = d[ko];
            d[ko] = wk;
            oya = ko;
            ko = oya * 2;
        }
    }

    while(end > 1) {
        wk = d[1];
        d[1] = d[end];
        d[end] = wk;
        --end;

        oya = 1;
        ko = oya * 2;
        while(ko <= end){
            if(ko < end && d[ko] < d[ko + 1])
                ++ko;
            if(d[oya] >= d[ko]) break;
            wk = d[oya];
            d[oya] = d[ko];
            d[ko] = wk;
            oya = ko;
            ko = oya * 2;
        }
    }
}

int main() {
    int i;
    int d[N] = {0, 90, 70, 60, 30, 20, 80, 50, 10, 40, 99};

    heap_sort(d, N - 1);
    for(i = 1; i < N; i++) printf("%d ", d[i]);
    printf("\n");

    return 0;
}