#include <stdio.h>

void pythagoras(int k){
    int a, b, c;
    for(c = 1; c <= k; c++) {
        for(b = 1; b < c; b++) {
            for(a = 1; a < b; a++) {
                if(a*a + b*b == c*c) {
                    printf("(%d, %d, %d)\n", a, b, c);
                }
            }
        }
    }
}

int main() {
    pythagoras(10);
    return 0;
}