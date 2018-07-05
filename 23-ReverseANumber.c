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
            return 1; //assuming only positive numbers can be reversed
        }
        for(; i < strlen(str); i++) {
            if(!isdigit(str[i])) {
                return 1;
            }
        }
        input = atoi(str);
        while(input > 0) {
            result = (result * 10) + (input % 10);
            input /= 10;
        }
        printf("%d\n", result);
    }
    return 0;
}
