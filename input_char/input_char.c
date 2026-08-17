#include <stdio.h>
#include <string.h>
#include "input_char.h"

void get_input_char(char input_char[], size_t max_buffer) {
    int input_char_code = 0;
    while(1) {
        fgets(input_char, max_buffer, stdin);
        if (strchr(input_char, '\n') == NULL || input_char[0] == '\n') {
            printf("未入力または%ld文字を超えています。もう一度入力してください。\n", max_buffer);
            if(strchr(input_char, '\n') == NULL) {
                while ((input_char_code = getchar()) != '\n' && input_char_code != EOF);
            }
        } else {
            input_char[strcspn(input_char, "\n")] = '\0';
            break;
        }
    }
    return;
}