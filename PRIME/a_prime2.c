#include <stdio.h>

#define N 1000
#define TRUE 1
#define FALSE 0

char prm[N + 1];

int main() {
    int i, times;
    for(i = 0; i < N; i++) prm[i] = TRUE;

    for(i = 2; i*i <= N; i++){
        if(prm[i] == TRUE) {
            for(times=2; i*times < N; times++){
                prm[i*times] = FALSE;
            }
        }
    }

    for(i = 2; i <= N; i++) {
        if(prm[i] == TRUE) printf("%d ", i);
    }
    printf("\n");

    return 0;
}