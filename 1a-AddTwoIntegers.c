#include<stdio.h>
#include<stdlib.h> //only required for using atoi()
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
    if(argc != 3) {
        return 1;
    }
    else {
        int input1 = 0, input2 = 0, result = 0;
        const char *str1, *str2; //const is required to avoid compilation warnings
        str1 = argv[1];
        str2 = argv[2];
        int i = 0, j = 0;
        if(str1[i] == '-') {
            i++;
        }
        if(str2[j] == '-') {
            j++;
        }
        if((i == 1) && (strlen(str1) == 1)) {
            return 1;
        }
        if((j == 1) && (strlen(str2) == 1)) {
            return 1;
        }
        for(; i < strlen(str1); i++) {
            if(!isdigit(str1[i])) {
                return 1;
            }
        }
        for(; j < strlen(str2); j++) {
            if(!isdigit(str2[j])) {
                return 1;
            }
        }
        input1 = getIntFromString(str1);
        input2 = getIntFromString(str2);
        /*input1 = atoi(argv[1]);
        input2 = atoi(argv[2]);*/
        result = input1 + input2;
        printf("%d\n", result);
    }
    return 0;
}
