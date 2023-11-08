#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char s1[20], s2[20];
    int i;
    scanf("%s", s1);
    scanf("%s", s2);
    if ((strlen(s1) <= 3) || (strlen(s2) <= 3) || (strlen(s1) > 20) || (strlen(s1) > 20)) {
        printf("error\n");
    } else {
        printf("%d\n%d\n", strlen(s1), strlen(s2));
        char * s3 = strcat(s1, s2);
        for (i=0; i<strlen(s3); i++) {
            printf("%c", s3[strlen(s3)-i-1]);
        }
    }
}