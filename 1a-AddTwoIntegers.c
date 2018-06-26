#include<stdio.h>
#include<stdlib.h> //only required for using atoi()
#include<string.h>

int getNumFromString(const char *str) {
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
        int input1 = 0, input2 = 0, result = 0, len = 0;
        const char *str1, *str2; //const is required to avoid compilation warnings
        str1 = argv[1];
        str2 = argv[2];
        input1 = getNumFromString(str1);
        input2 = getNumFromString(str2);
        /*input1 = atoi(argv[1]);
        input2 = atoi(argv[2]);*/
        result = input1 + input2;
        printf("%d\n", result);
    }
    return 0;
}
