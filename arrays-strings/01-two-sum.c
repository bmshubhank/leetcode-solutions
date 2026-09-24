#include <stdio.h>
#include <stdlib.h>

int *twoSum(const int *nums, int numsSize, int target, int *returnSize) {
    int *answer = malloc(2 * sizeof(int));

    if (answer == NULL) {
        *returnSize = 0;
        return NULL;
    }

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                answer[0] = i;
                answer[1] = j;
                *returnSize = 2;
                return answer;
            }
        }
    }

    free(answer);
    *returnSize = 0;
    return NULL;
}

int main(void) {
    int normal[] = {2, 7, 11, 15};
    int edge[] = {3, 3};
    int returnSize;
    int *answer;

    answer = twoSum(normal, 4, 9, &returnSize);
    printf("Normal case: [%d, %d]\n", answer[0], answer[1]);
    free(answer);

    answer = twoSum(edge, 2, 6, &returnSize);
    printf("Edge case: [%d, %d]\n", answer[0], answer[1]);
    free(answer);

    return 0;
}
