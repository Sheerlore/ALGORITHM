#include <stdio.h>
#include <stdlib.h>
#define N 10001

int main() {
    FILE *fp;
    char data[N][80];
    unsigned int i, j;

    if((fp = fopen("./input.txt", "r")) == NULL) exit(1);

    for(i = 0; i < 10000 && fgets(data[i], sizeof(data[i]), fp) != NULL;i++){
        printf("data[%d]=%s", i, data[i]);
        for(j = 0;fscanf(fp, "%c", &data[i][j]) != EOF;j++){
            printf("%c\n", data[i][j]);
        }
    }
    
    fclose(fp);

    return 0;
}