#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 10001

int main() {
    FILE *fp;
    char data[N][80];
    int num[N][80];
    char *te, *ee;
    unsigned int i, j, k;
    int temp;
    

    if((fp = fopen("./input.txt", "r")) == NULL) exit(1);

    for(i = 0; i < 10000 && fgets(data[i], sizeof(data[i]), fp) != NULL;i++){
        // printf("data[%d]=%s\n", i, data[i]);

        te = data[i];
        j = 0;
        //printf("%s \n", te);
        while((ee = strtok(te, " \n")) != NULL){
            //printf(" [%s]", ee);
            num[i][j] = atoi(ee);
            te = NULL;
            j++;
        }
        //printf("\n");

        printf("%d\n", num[i][0]); //q1

        temp = num[i][0];
        for(k = 1; k < (sizeof(num[i]) / sizeof(int)) ; k++){
            //printf("%d ", num[i][k]);     //すべて表示
            if(temp < num[i][k]){
                temp = num[i][k];
            }
        }
        printf("max = %d \n", temp);
    }
    puts(" ");
    fclose(fp);

    return 0;
}