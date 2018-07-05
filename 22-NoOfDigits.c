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
        int input = 0, result = 0;
        const char *str;
        str = argv[1];
        int i = 0;
        if(str[i] == '-') {
            i++;
        }
        if((i == 1) && (strlen(str) == 1)) {
            return 1;
        }
        for(; i < strlen(str); i++) {
            if(!isdigit(str[i])) {
                return 1;
            }
        }
        input = abs(atoi(str));
        while(input > 0) {
            result++;
            input /= 10;
        }
        printf("%d\n", result);
    }
    return 0;
}
