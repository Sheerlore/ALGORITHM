#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 10000

int main() {
    FILE *fp;
    char data[80];
    int num[N][80] = {{0}};
    char *te, *ee;
    unsigned int i, j, k;
    int temp = 0;
    

    if((fp = fopen("./input.txt", "r")) == NULL) exit(1);

    for(i = 0; i < N && fgets(data, sizeof(data), fp) != NULL;i++){
        te = data;
        j = 0;
        while((ee = strtok(te, " \n")) != NULL){
            num[i][j] = atoi(ee);
            j++;
            te = NULL;
        }

        printf("first = %d\n", num[i][0]);

        temp = num[i][0];
        for(k = 0; k < (sizeof(num[i]) / sizeof(int)); k++){
            printf("%d ", num[i][k]);     //すべて表示
            if(temp < num[i][k]){
                temp = num[i][k];
            }
        }
        printf("\n");
        printf("max = %d \n", temp);
        printf("\n");
    }
    fclose(fp);

    return 0;
}