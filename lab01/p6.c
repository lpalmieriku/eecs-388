#include <stdio.h>

int main() {
    int count = 0;
    char str[100];
    fgets(str, 100, stdin);
    for (int i=0; i < 100; i++) {
        if (str[i] == 000) {
            printf("%d", count-1);
            break;
        }
        count++;
    }


    return 0;
}