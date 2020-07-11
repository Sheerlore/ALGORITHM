#include <stdio.h>

//リニアサーチ（線形探索）
int linear_search(int ary[], int n, int key){
    int i;
    for(i = 0; i < n; i++) {
        if(ary[i] == key) return i;
    }
    return -1;
}

//番兵（番人:sentinel）を使ったリニアサーチ
int linear_search2(int ary[], int n, int key) {
    int i = 0;
    ary[n] = key;
    while (ary[i] != key) ++i;
    if(i < n) return i; else return -1;
}

//配列末尾に置換格納する番兵を使ったリニアサーチ
int linear_search3(int ary[], int n, int key) {
    int i = 0, save;
    save = ary[n - 1];
    ary[n - 1] = key;

    while(ary[i] != key) ++i;
    ary[n - 1] = save;

    if(i < n-1) return i;
    if(key == save) return n - 1;
    return -1;
}

int main() {
    int ret;
    int item[6] = {34,12,55,46,68,22};
    char *name[6] = {"TV","Camera","Radio","Car","PC","Book"};

    ret = linear_search(item, 6, 55);
    printf("data = 55 ret = %d\n", ret);

    if(ret == -1) printf("not register\n");
    else printf("name=%s\n",name[ret]);

    return 0;
}