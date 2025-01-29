#include <stdio.h>

int main() {

    int num, prime;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i=2; i < num; i++) {
        prime = 0;
        for (int j=2; j < i; j++) {
            if (i % j == 0) {
                prime = 1;
                break;
            }
        }
        if (prime == 0) {
            printf("%d ", i);
        }
    }    

    return 0;
}