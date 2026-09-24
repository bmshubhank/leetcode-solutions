#include <stdio.h>
#include <string.h>

void reverseString(char *s, int sSize) {
    int left = 0;
    int right = sSize - 1;

    while (left < right) {
        char temporary = s[left];
        s[left] = s[right];
        s[right] = temporary;
        left++;
        right--;
    }
}

int main(void) {
    char normal[] = {'h', 'e', 'l', 'l', 'o'};
    char edge[] = {'a'};

    reverseString(normal, 5);
    printf("Normal case: %s\n", normal);

    reverseString(edge, 1);
    printf("Edge case: %c\n", edge[0]);

    return 0;
}
