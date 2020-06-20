//ユークリッドの互除法

#include <stdio.h>

void gcd1(int a, int b){
    while(a != b){
        if(a > b){
            a = a - b;
        }else{
            b = b - a;
        }
        printf("最大公約数: %d\n", a);
    }
}

int main(void){
    gcd1(128, 72);
    printf("complete!\n");
    return 0;
}