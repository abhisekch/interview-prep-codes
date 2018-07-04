#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int factorialByRecursion(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }
    else {
        return n*factorialByRecursion(n-1);
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
            return 1; // assuming factorials exist only for +ve numbers
        }
        for(; i < strlen(str); i++) {
            if(!isdigit(str[i])) {
                return 1;
            }
        }
        input = atoi(str);
        result = factorialByRecursion(input);
        printf("%d\n", result);
    }
    return 0;
}
