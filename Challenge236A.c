#include <stdio.h>
#include <string.h>

int main() {

    char name[101];
    int len = 0, distinct = 0;

    scanf("%s", name);

    len = strlen(name);

    for (int i = 0; i < len; i++) {
        int repeated = 0;

        for (int j = 0; j < i; j++) {
            if (name[i] == name[j]) {
                repeated = 1;
                break;
            }
        }

        if (repeated == 0) {
            distinct++;
        }
    }

    if (distinct % 2 == 0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");

    return 0;
}