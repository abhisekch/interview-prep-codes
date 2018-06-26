#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

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

float multiplyByRecursion(float a, float b) {
    if(b == 0) {
        return a;
    }
    else if(b > 0 && b < 1) {
        return a * b;
    }
    else if(b >= 1) {
        return multiplyByRecursion(a, b - 1) + a;
    }
}

int main(int argc, char const *argv[])
{
    if(argc == 1 || argc == 2 || argc > 3) {
        return 0;
    }
    else {
        float input1 = 0.0f, input2 = 0.0f, result = 0.0f;
        const char *str1, *str2;
        str1 = argv[1];
        str2 = argv[2];
        input1 = getFloatFromString(str1);
        input2 = getFloatFromString(str2);
        /*input1 = atof(str1);
        input2 = atof(str2);*/
        result = multiplyByRecursion(fabsf(input1), fabsf(input2));
        if(((input1 >= 0.0f) && (input2 < 0.0f)) || ((input1 < 0.0f) && (input2 >= 0.0f))) {
            result *= -1.0f;
        }
        printf("%f\n", result);
    }
    return 0;
}
