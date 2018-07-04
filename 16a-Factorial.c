#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(int argc, char const *argv[])
{
    if(argc != 2) {
        return 1;
    }
    else {
        int input = 0, result = 1;
        const char *str;
        str = argv[1];
        int i = 0;
        if(str[i] == '-') {
            return 1; // assuming factorials exist only for +ve numbers
        }
        for(; i < strlen(str); i++) {
            if(!isdigit(str[i])) {
                return 1;
            }
        }
        input = atoi(str);
        for(int i = 1; i <= input; i++) {
            result *= i;
        }
        printf("%d\n", result);
    }
    return 0;
}
