#include <stdio.h>

int main() {
    FILE *fp;
    int size = 0;
    int d[10000] = {0};
    int i;

    if((fp = fopen("./in.txt", "r")) == NULL) return 0;

    while(fscanf(fp, "%d", &d[size]) != EOF) size++;

    printf("size = %d\n", size);
    for(i = 0; i < size; i++){
        printf("%d\n",d[i]);
    }

    return 0;
}