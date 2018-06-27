#include<stdio.h>
#include<string.h>
#include<stdlib.h>

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
    if(argc == 1 || argc == 2 || argc > 3) {
        return 0;
    }
    else {
        int input1 = 0, input2 = 0, quotient = 0, rem = 0;
        const char *str1, *str2;
        str1 = argv[1];
        str2 = argv[2];
        input1 = getIntFromString(str1);
        input2 = getIntFromString(str2);
        /*input1 = atoi(str1);
        input2 = atoi(str2);*/
        if(input2 == 0) {
            return 0;
        }
        else {
            printf("%d %d", input1 / input2, input1 % input2);
        }
    }
    return 0;
}
