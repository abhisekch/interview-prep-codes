#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(int argc, char const *argv[])
{
    if(argc != 2) {
        return 1;
    }
    else {
        int input = 0;
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
        input = atoi(str);
        for(i = 1; i <= 10; i++) {
            printf("%d * %d = %d\n", input, i, (input * i));
        }
    }
    return 0;
}
