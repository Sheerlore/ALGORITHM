#include <stdio.h>

int sum(int a, int b, int c){
    /*
    3つの整数a, b, cの和を返す関数
    変数に10が含まれている場合は、
    その変数とその変数の右側に記述された変数は和に加算しない
    input: a, b, c: int
    output: a, b, cの和
    ex) sum(1,2,3) -> 6
        sum(3, 10, 11) -> 3
        sum(10, 2, 8) -> 0
    */
    if(a == 10){
        a = 0; b = 0; c = 0;
    }else if(b == 10){
        b = 0; c = 0;
    }else if(c == 10){
        c = 0;
    }
    return a + b + c;
}


int main(){
    printf("%d\n", sum(1, 2, 3));
    printf("%d\n", sum(3, 10, 11));
    printf("%d\n", sum(10, 2, 8));
    
    return 0;
}