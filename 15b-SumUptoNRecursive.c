#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int sumUptoN(int n) {
    if(n == 1) {
        return 1;
    }
    else {
        return sumUptoN(n - 1) + n;
    }
}

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
        result = sumUptoN(abs(input));
        if(input < 0) {
            result = 0 - result;
        }
        printf("%d\n", result);
    }
    return 0;
}
