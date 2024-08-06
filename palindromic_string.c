#include <stdio.h>
#include <string.h>
int check(char s[]) {
    int l = strlen(s);
    for (int i = 0; i < l / 2; i++) {
        if (s[i] != s[l - 1 - i]) {
            return 0; 
        }
    }
    return 1; 
}
int main() {
    char s[1000];
    scanf("%999s", s);
    if (check(s)) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}
