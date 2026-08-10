#include <stdio.h>
#include <string.h>
#include "../input_char/input_char.h"

#define MAX_CHARACTER (64)

int main(void){
    int count = 0;
    char name[MAX_CHARACTER];
    
    printf("文字を入力してください:");
    get_input_char(name, sizeof(name));
    
    printf("文字列の長さは（strlen関数使用）:%zu\n", strlen(name));
    
    while(name[count] != '\0') {
        count ++;
    }
    
    printf("文字列の長さは（strlen関数未使用）:%d\n", count);
    return 0;
}
