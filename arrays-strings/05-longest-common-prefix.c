#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *longestCommonPrefix(char **strs, int strsSize) {
    int prefixLength;
    char *prefix;

    if (strsSize == 0) {
        prefix = malloc(sizeof(char));
        prefix[0] = '\0';
        return prefix;
    }

    prefixLength = (int)strlen(strs[0]);
    for (int i = 1; i < strsSize; i++) {
        int currentLength = 0;

        while (currentLength < prefixLength &&
               strs[i][currentLength] == strs[0][currentLength]) {
            currentLength++;
        }
        prefixLength = currentLength;
    }

    prefix = malloc((prefixLength + 1) * sizeof(char));
    if (prefix == NULL) {
        return NULL;
    }

    strncpy(prefix, strs[0], prefixLength);
    prefix[prefixLength] = '\0';
    return prefix;
}

int main(void) {
    char *normal[] = {"flower", "flow", "flight"};
    char *edge[] = {"dog", "racecar", "car"};
    char *answer;

    answer = longestCommonPrefix(normal, 3);
    printf("Normal case: %s\n", answer);
    free(answer);

    answer = longestCommonPrefix(edge, 3);
    printf("Edge case: %s\n", answer);
    free(answer);

    return 0;
}
