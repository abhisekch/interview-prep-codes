#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

float getFloatFromString(const char *str) {
    int len = strlen(str);
    int dotpos = 0;
    float num = 0.0f;
    int i = 0;
    if(str[0] == '-') {
        i++;
    }
    for(; i < len; i++) {
        if(str[i] == '.') {
            dotpos = len - i - 1;
        }
        else {
            num = (num * 10) + (str[i] - 48);
        }
    }
    while(dotpos--) {
        num /= 10.0f;
    }
    if(str[0] == '-') {
        num = 0.0f - num;
    }
    return num;
}

int main(int argc, char const *argv[])
{
    if(argc != 3) {
        return 1;
    }
    else {
        float input1 = 0.0f, input2 = 0.0f, result = 0.0f;
        const char *str1, *str2;
        str1 = argv[1];
        str2 = argv[2];
        int i = 0, j = 0;
        if(str1[i] == '-') {
            i++;
        }
        if(str2[j] == '-') {
            j++;
        }
        for(; i < strlen(str1); i++) {
            if(!isdigit(str1[i]) && str1[i]!='.') {
                return 1;
            }
        }
        for(; j < strlen(str2); j++) {
            if(!isdigit(str2[j]) && str2[j]!='.') {
                return 1;
            }
        }
        input1 = getFloatFromString(str1);
        input2 = getFloatFromString(str2);
        /*input1 = atof(str1);
        input2 = atof(str2);*/
        result = input1 * input2;
        printf("%f\n", result);
    }
    return 0;
}
