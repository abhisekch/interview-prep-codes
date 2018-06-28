#include<stdio.h>
#include<string.h>
#include<ctype.h>

int getIntFromString(const char *str) {
    int len = strlen(str);
    int num = 0, i = 0;
    if(str[0] == '-') {
        i++;
    }
    for(; i < len; i++) {
        num = (num * 10) + (str[i] - 48);
    }
    if(str[0] == '-') {
        num = 0 - num;
    }
    return num;
}

int main(int argc, char const *argv[])
{
    if(argc != 2) {
        return 1;
    }
    else {
        int input = 0;
        const char *str;
        str = argv[1];
        int len = strlen(str);
        for(int i=0; i<len; i++) {
            if(!isdigit(str[i])) {
                return 1;
            }
        }
        input = getIntFromString(str);
        if(input % 2  == 0) {
            printf("Even\n");
        }
        else {
            printf("Odd\n");
        }
    }
    return 0;
}
