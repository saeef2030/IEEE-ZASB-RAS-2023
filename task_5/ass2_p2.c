#include <stdio.h>
#include <string.h>
#define stop_code "!!"

int main() {
    char input[200];
    int unique[200] = {0}, i, length;
 printf("if you want to stop type !!");
    while (1) {
        printf("\nPlese Enter your word:\n ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0';

        if (strcmp(input, stop_code) == 0) {
            break;}

        length = strlen(input);
        for (i = 0; i < length; i++) {
            unique[(int)input[i]] = 1; 
        }

        printf("Your word Unique characters are: ");
        for (i = 0; i < 200; i++) {
            if (unique[i] == 1) {
                printf("%c ", (char)i);
                unique[i] = 0; 
            }
        }
    }
}