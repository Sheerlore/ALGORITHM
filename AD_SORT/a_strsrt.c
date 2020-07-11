#include <stdio.h>
#include <string.h>
#define N 8

//文字列のソート
void s_quick_sort(char *ss[], int top, int end){
    char *key, *wk;
    int i, j;

    key = ss[(top + end) / 2];
    i = top - 1;
    j = end + 1;
    while(1) {
        while(strcmp(ss[++i], key) < 0);
        while(strcmp(ss[--j], key) > 0);
        if(i >= j) break;
        wk = ss[i];
        ss[i] = ss[j];
        ss[j] = wk;
    }
    if(top < i - 1) s_quick_sort(ss, top, i - 1);
    if(j + 1 < end) s_quick_sort(ss, j + 1, end);
}

int main() {
    int i;
    char st[N][10] = {"eee", "bbb", "ggg", "fff", "hhh", "ccc", "aaa", "ddd"};
    char *p[N];

    for(i = 0; i < N; i++) {
        p[i] = st[i];
    }

    s_quick_sort(p, 0, N-1);
    for(i = 0; i < N; i++) printf("%s ", p[i]);
    printf("\n");

    return 0;
}