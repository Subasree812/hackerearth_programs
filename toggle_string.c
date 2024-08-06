#include <stdio.h>

void toggle(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        }
    }
	printf("%s",str);
}
int main() {
    char s[1000];
	scanf("%999s",s);
	toggle(s);
}
