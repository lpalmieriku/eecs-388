#include <stdio.h>

int checkNum(int target, int arr1[], int size) {
    for (int i=0; i < size; i++) {
        if (arr1[i] == target) {
            return 1;
        }
    }
    return 0;
}

int main() {

    int size, elem, count = 0;

    printf("How big is the array?\n");
    scanf("%d", &size);
    int nums[size], dups[size];

    for (int i=0; i < size; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &elem);
        nums[i] = elem;
    }

    for (int n=0; n < size; n++) {
        for (int m=n+1; m < size; m++) {
            if (nums[m] == nums[n] && !(checkNum(nums[n], dups, size))) {
                dups[count] = nums[n];
                count++;
            }
        }
    }
    printf("%d", count);

    return 0;
}