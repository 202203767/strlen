#include <stdio.h>
#include <string.h>
#include "../input_char/input_char.h"

#define MAX_CHARACTER (64)

int my_strlen(char* str) {
    int count = 0;
    while(str[count] != '\0') {
        count ++;
    }
    return count;
}

int main(void) {
    char name[MAX_CHARACTER];

    get_input_char(name, sizeof(name));
    
    printf("文字列の長さは（strlen関数使用）:%zu\n", strlen(name));
    
    printf("文字列の長さは（strlen関数未使用）:%d\n", my_strlen(name));
    
    return 0;
}