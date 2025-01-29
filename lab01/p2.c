#include <stdio.h>

int main() {

    int weight;
    char level;
    scanf("%d", &weight);

    level = (weight < 10000) ? 'l' : (weight >= 26000) ? 'h' : 'm';
    printf("%c", level);

    return 0;
}