#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char UPPER[] = "QWERTYUIOPPASDFGHJKLLZXCVBNMM";
    char lower[] = "qwertyuioppasdfghjkllzxcvbnmm";
    char s1[50] = {}, s2[50] = {};
    int i, j;
    scanf("%s", &s1);

    for (i=0; i<strlen(s1); i++) {
        if ((s1[i] >= 'A') && (s1[i] <= 'Z')) {
            for (j=0; j<29; j++) {
                if (s1[i] == UPPER[j]) {
                    if (s1[i] == UPPER[j-1]) {
                        s2[i] = UPPER[j];
                    } else {
                        s2[i] = UPPER[j+1];
                    }
                }
            }
        }
        if ((s1[i] >= 'a') && (s1[i] <= 'z')) {
            for (j=0; j<29; j++) {
                if (s1[i] == lower[j]) {
                    if (s1[i] == lower[j-1]) {
                        s2[i] = lower[j];
                    } else {
                        s2[i] = lower[j+1];
                    }
                }
            }
        }
    }
    printf("%s", s2);
}