#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool isAnagram(const char *s, const char *t) {
    int counts[26] = {0};

    if (strlen(s) != strlen(t)) {
        return false;
    }

    for (int i = 0; s[i] != '\0'; i++) {
        counts[s[i] - 'a']++;
        counts[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (counts[i] != 0) {
            return false;
        }
    }

    return true;
}

int main(void) {
    printf("Normal case: %s\n", isAnagram("anagram", "nagaram") ? "true" : "false");
    printf("Edge case: %s\n", isAnagram("a", "b") ? "true" : "false");

    return 0;
}
