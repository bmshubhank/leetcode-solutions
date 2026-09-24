#include <stdio.h>

int search(const int *nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;

    while (left <= right) {
        int middle = left + (right - left) / 2;

        if (nums[middle] == target) {
            return middle;
        }
        if (nums[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    return -1;
}

int main(void) {
    int numbers[] = {-1, 0, 3, 5, 9, 12};

    printf("Normal case: %d\n", search(numbers, 6, 9));
    printf("Edge case: %d\n", search(numbers, 6, 2));

    return 0;
}
