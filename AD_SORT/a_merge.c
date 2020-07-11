#include <stdio.h>

#define ASIZE 9
#define BSIZE 6

//マージ 2つの配列を1つにする
void merge(int a[], int asize, int b[], int bsize, int c[]){
    int na = 0;
    int nb = 0;
    int nc = 0;
    while(na < asize && nb < bsize) {
        if(a[na] <= b[nb]) {
            c[nc++] = a[na++];
        }else{
            c[nc++] = b[nb++];
        }
    }
    while(na < asize) c[nc++] = a[na++];
    while(nb < bsize) c[nc++] = b[nb++];

}

int main() {
    int aa[ASIZE] = {10,20,25,35,40,55,70,75,80};
    int bb[BSIZE] = {15,30,45,50,60,65};
    int cc[ASIZE + BSIZE];
    int i;

    merge(aa, ASIZE, bb, BSIZE, cc);
    for(i = 0; i < ASIZE + BSIZE; i++) {
        printf("%d ", cc[i]);
    }
    printf("\n");

    return 0;

}