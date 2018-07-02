#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(int argc, char const *argv[])
{
    if(argc != 2) {
        return 1;
    }
    else {
        int inputYear = 0;
        int i = 0;
        const char *str;
        str = argv[1];
        for(; i < strlen(str); i++) {
            if(!isdigit(str[i])) {
                return 1; // reject negative and floating point inputs
            }
        }
        inputYear = atoi(str);
        if(inputYear % 400 == 0) {
            printf("Leap year\n");
        }
        else if(inputYear % 100 == 0) {
            printf("Not leap year\n");
        }
        else if(inputYear % 4 == 0) {
            printf("Leap year\n");
        }
        else {
            printf("Not leap year\n");
        }
    }
    return 0;
}
