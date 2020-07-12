#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    if((fp = fopen("./input.txt", "r")) != NULL){
        puts("fp != NULL");
    }else {
        puts("fp == NULL");
    }

    fclose(fp);

    return 0;
}