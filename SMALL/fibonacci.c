#include <stdio.h>

int fibonacci(int n){
    if(n == 1 || n ==2) return 1;
    else return fibonacci(n - 2) + fibonacci(n - 1);
}

int fibobacci_dp(int n) {
    int current = 1;
    int next = 1;
    int temp;
    for(int i = 1; i < n; i++){
        temp = current + next;
        current = next;
        next = temp;
    }
    return current;
}

int main() {
    printf("fib(10) = %d\n", fibonacci(10));
    printf("fib_dp(10) = %d\n", fibobacci_dp(10));

    return 0;
}