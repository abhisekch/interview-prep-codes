#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int addByRecursion(int a, int b) {
    if(b == 0) {
        return a;
    }
    else if(b > 0) { //when b is a -ve number
        return addByRecursion(a, b - 1) + 1;
    }
    else {
        return addByRecursion(a, b + 1) - 1;
    }
}

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
    int input1 = 0, input2 = 0, result = 0;
    const char *str1, *str2; //const is required to avoid compilation warnings
    str1 = argv[1];
    str2 = argv[2];
    input1 = getIntFromString(str1);
    input2 = getIntFromString(str2);
    /*input1 = atoi(argv[1]);
    input2 = atoi(argv[2]);*/
    result = addByRecursion(input1, input2);
    printf("%d\n", result);
    return 0;
}
