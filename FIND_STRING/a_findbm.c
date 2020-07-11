#include <stdio.h>
#include <string.h>

#define DEBUG 1

int find(unsigned char text[], unsigned char key[]){
    int t, k, tn, kn, tpos, ch;
    int skip[256];

    tn = strlen(text);
    kn = strlen(key);
    if(kn == 0) return -1;

    for(k=0; k <= 255; k++) {skip[k] = kn;}
    for(k = 0; k < kn - 1; k++) {skip[key[k]] = kn - k - 1;}

    tpos = kn - 1;
    while(tpos < tn){
        #if DEBUG
        printf("test:%s\n", text);
        printf("key :%*s\n", tpos + 1, key);
        #endif

        ch = text[tpos];
        t = tpos + 1;
        k = kn;
        while(text[--t] == key[--k]) {
            if(k == 0) return t;
        }
        tpos += skip[ch];
    }
    return -1;
}

int main() {
    char s1[] = "CeeeeeeBAeeeeABACeAee";
    char s2[] = "ABAC";
    printf("pos  %d\n", find(s1, s2));

    return 0;
}