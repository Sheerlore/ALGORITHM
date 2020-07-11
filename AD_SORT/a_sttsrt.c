#include <stdio.h>
#include <string.h>
#define N 8

typedef struct man
{
    int age;
    char name[40];
} Man;

//レコードのソート
void stt_quick_sort(Man *d[], int top, int end) {
    Man *key, *wk;
    int i, j;

    key = d[(top + end)/2];
    i = top - 1;
    j = end + 1;
    while(1) {
        while(d[++i] -> age < key -> age);
        while(d[--j] -> age > key -> age);
        if(i >= j) break;
        wk = d[i];
        d[i] = d[j];
        d[j] = wk;
    }

    if(top < i - 1) stt_quick_sort(d, top, i-1);
    if(j + 1 < end) stt_quick_sort(d, j+1, end);
}

int main() {
    int i;
    Man dd[N] = {
        30, "Yamada",
        70, "Tanaka",
        50, "Satou",
        80, "Suzuki",
        60, "Hayashi",
        20, "Inoue",
        10, "Yoshida",
        40, "Mori",
    };
    Man *p[N];

    for(i = 0; i < N; i++){
        p[i] = &dd[i];
    }
    stt_quick_sort(p, 0, N-1);
    for(i = 0; i<N; i++) printf("%d:%s\n", p[i] -> age, p[i] -> name);

    return 0;
}
