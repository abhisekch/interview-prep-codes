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
    if(argc != 4) {
        return 1;
    }
    else {
        int input1 = 0, input2 = 0, input3 = 0;
        const char *str1, *str2, *str3;
        str1 = argv[1];
        str2 = argv[2];
        str3 = argv[3];
        int len1 = strlen(str1), len2 = strlen(str2), len3 = strlen(str3);
        for(int i=0; i< len1; i++) {
            if(!isdigit(str1[i])){
                return 1;
            }
        }
        for(int i=0; i< len2; i++) {
            if(!isdigit(str2[i])){
                return 1;
            }
        }
        for(int i=0; i< len3; i++) {
            if(!isdigit(str3[i])){
                return 1;
            }
        }
        input1 = getIntFromString(str1);
        input2 = getIntFromString(str2);
        input3 = getIntFromString(str3);
        if(input1 > input2) {
            if(input1 > input3) {
                printf("%d\n", input1);
            }
            else {
                printf("%d\n", input3);
            }
        }
        else {
            if(input2 > input3) {
                printf("%d\n", input2);
            }
            else {
                printf("%d\n", input3);
            }
        }
    }
    return 0;
}
