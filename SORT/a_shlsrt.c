#include <stdio.h>
#define N 8

//シェルソート
int shell_sort(int d[], int top, int end) {
    int i, j, k, tmp, gap;
    
    for(gap=1; gap < (end - top + 1); gap = 2*gap+1);

    while((gap = (gap - 1)/2) > 0){

        for(k = 0; k < gap; k++) {
            for(i = top + k + gap; i <= end; i += gap) {
                tmp = d[i];
                for(j = i - gap; j >= k; j -= gap) {
                    if(d[j] > tmp) {
                        d[j + gap] = d[j];
                    }else{
                        break;
                    }
                }
                d[j + gap] = tmp;
            }
        }
    }
}

int main(){
    int i;
    int d[N] = {70, 20, 80, 50, 40, 10, 30, 60};

    shell_sort(d, 0, N-1);
    for(i = 0; i < N; i++) {
        printf("%d ", d[i]);
    }
    printf("\n");

    return 0;
}