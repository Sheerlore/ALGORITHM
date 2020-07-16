#include <stdio.h>

int sum(int a, int b, int c){
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