#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(a) / sizeof(a[0]);
    int *c, *d;
    int i;

    c = malloc(size/2);
    for(i = 0; i < size / 2; i++) {
        c[i] = a[i];
        printf("%d ", c[i]);
    }
    printf("\n");

    d = malloc(size/2);
    for(i = 0; i < size; i++) {
        d[i] = a[(i + size)/2];
        printf("%d ", d[i]);
    }
    printf("\n");

    return 0;
}