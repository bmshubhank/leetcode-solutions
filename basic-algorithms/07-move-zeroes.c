#include <stdio.h>

void moveZeroes(int *nums, int numsSize) {
    int nextNonZero = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            int temporary = nums[nextNonZero];
            nums[nextNonZero] = nums[i];
            nums[i] = temporary;
            nextNonZero++;
        }
    }
}

void printArray(const int *nums, int numsSize) {
    for (int i = 0; i < numsSize; i++) {
        printf("%d", nums[i]);
        if (i < numsSize - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

int main(void) {
    int normal[] = {0, 1, 0, 3, 12};
    int edge[] = {0, 0, 0};

    moveZeroes(normal, 5);
    printf("Normal case: ");
    printArray(normal, 5);

    moveZeroes(edge, 3);
    printf("Edge case: ");
    printArray(edge, 3);

    return 0;
}
