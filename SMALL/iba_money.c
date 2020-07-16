#include <stdio.h>

double nenri(double money){
    int i, j;
    double rate = 0.01;
    double temp;
    for(i = 1; i <= 10; i++){
        temp = money;
        for(j = 1; j <= 50; j++){
            temp += money*i*rate;
        }
        printf("%d%%の年利で50年後の預金は%.2lf円です.\n", i, temp);
    }
}

int main() {
    nenri(10000.0);
    
    return 0;
}