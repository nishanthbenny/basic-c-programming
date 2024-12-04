#include <stdio.h>
#include <string.h>

int main() {
    char s[13];
    char c[13];
    char t[13];
    int l1, l2, i;

    printf("Enter the first string:\n");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    printf("Enter the second string:\n");
    fgets(c, sizeof(c), stdin);
    c[strcspn(c, "\n")] = '\0';

    l1 = strlen(s);
    l2 = strlen(c);

    if (l1 > l2) {
        for (i = 0; i < l1; i++) {
            t[i] = s[i];
            s[i] = c[i];
            c[i] = t[i];
        }
    } else {
         for (i = 0; i < l2; i++) {
            t[i] = c[i];
            c[i] = s[i];
            s[i] = t[i];

        }
    }

    printf("First string after swap: %s\n", s);
    printf("Second string after swap: %s\n", c);

    return 0;

}
