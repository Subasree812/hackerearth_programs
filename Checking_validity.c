//The format is "DDXDDD-DD", where D stands for a digit (non zero) and X is an uppercase english letter.
#include <stdio.h>
int vow(char ch) {
    return (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'Y');
}
int odd(char d1, char d2) {
    return ((d1 - '0') + (d2 - '0')) % 2 != 0;
}
int main() {
    char t[10]; 
    scanf("%9s", t);
    if (vow(t[2])) {
        printf("invalid\n");
        return 0;
    }
    if (odd(t[0], t[1]) ||
        odd(t[3], t[4]) ||
        odd(t[4], t[5]) ||
        odd(t[7], t[8])) {
        printf("invalid\n");
    } else {
        printf("valid\n");
    }
    return 0;
}
