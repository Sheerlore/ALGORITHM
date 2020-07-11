#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//ファイルのマージ
void fmerge(char *file1, char *file2, char *ofile){
    FILE *f1, *f2, *fo;
    char *p1, *p2, ss1[80], ss2[80];
    if((f1=fopen(file1, "r")) == NULL) {puts("?"); exit(1);}
    if((f2=fopen(file2, "r")) == NULL) {puts("?"); exit(1);}
    if((fo=fopen(ofile, "w")) == NULL) {puts("?"); exit(1);}

    p1 = fgets(ss1, 80, f1);
    p2 = fgets(ss2, 80, f2);

    while(p1 != NULL && p2 != NULL) {
        if(strcmp(ss1, ss2) <= 0) {
            fputs(ss1, fo);
            p1 = fgets(ss1, 80, f1);
        }else{
            fputs(ss2, fo);
            p2 = fgets(ss2, 80, f2);
        }
    }
    while(p1 != NULL) {
        fputs(ss1, fo);
        p1 = fgets(ss1, 80, f1);
    }
    while(p2 != NULL) {
        fputs(ss2, fo);
        p2 = fgets(ss2, 80, f2);
    }
}

int main(){
    fmerge("./f1.txt", "./f2.txt", "./out.txt");
    puts("OK");

    return 0;
}
