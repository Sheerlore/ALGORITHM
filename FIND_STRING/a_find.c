#include <stdio.h>
#include <string.h>

//単純な文字列検索
int find(char text[], char key[]){
    int pos, t, k, end;

    if(key[0] == '\0') return -1;
    end = (int)(strlen(text) - strlen(key));

    for(pos = 0; pos <= end; pos++){
        t = pos;
        k = 0;
        while(text[t] == key[k] && key[k]) {
            t++;
            k++;
        }
        if(key[k] == '\0') return pos;
    }
    return -1;
}

int main() {
    char s1[] = "abcdefghij";
    char s2[] = "def";

    printf("text = %s \n", s1);
    printf("key = %s \n", s2);
    printf("pos = %d \n", find(s1, s2));

    return 0;
}