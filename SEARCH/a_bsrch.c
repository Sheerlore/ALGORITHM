#include <stdio.h>

int bin_search(int ary[], int n, int key){
    int left, right, mid;
    
    left = 0;
    right = n - 1;
    while(left <= right) {
        mid = (right + left) / 2;
        if(key == ary[mid]) return mid;
        if(key < ary[mid]) right = mid - 1;
        else left = mid + 1;
    }
    return -1;
}

int main() {
    int data[11] = {10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60};
    int ky;

    for (ky = 5; ky <= 65; ky += 5) {
        printf("data = %d ret = %d\n", ky, bin_search(data, 11, ky));
    }
    
    return 0;
}
