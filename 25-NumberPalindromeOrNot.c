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
        int input = 0, reversedNum = 0, tempInput = 0;
        const char *str;
        str = argv[1];
        int i = 0;
        if(str[i] == '-') {
            return 1; // assuming only positive numbers can be palindrome
        }
        for(; i < strlen(str); i++) {
            if(!isdigit(str[i])) {
                return 1;
            }
        }
        input = atoi(str);
        tempInput = input;
        while(input > 0) {
            reversedNum = (reversedNum * 10) + (input % 10);
            input /= 10;
        }
        if(tempInput == reversedNum) {
            printf("Yes\n");
        }
        else {
            printf("No\n");
        }
    }
    return 0;
}
