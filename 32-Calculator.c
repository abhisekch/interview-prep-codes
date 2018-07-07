#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    if(argc != 4) {
        printf("%d\n", argc);
        printf("first return\n");
        return 1;
    }
    else {
        int input1 = 0, input2 = 0;
        const char *str1, *str2, *str3;
        str1 = argv[1];
        str2 = argv[3];
        str3 = argv[2];
        char symbol;
        int i = 0, j = 0;
        if(str1[i] == '-') {
            i++;
        }
        if((i == 1) && (strlen(str1) == 1)) {
            return 1;
        }
        for(; i < strlen(str1); i++) {
            if(!isdigit(str1[i])) {
                return 1;
            }
        }
        if(str2[j] == '-') {
            j++;
        }
        if((j == 1) && (strlen(str2) == 1)) {
            return 1;
        }
        for(; j < strlen(str2); j++) {
            if(!isdigit(str2[j])) {
                return 1;
            }
        }
        if(strlen(str3) != 1) {
            return 1;
        }
        symbol = *str3;
        input1 = atoi(str1);
        input2 = atoi(str2);
        switch(symbol) {
            case '+':
                printf("%d\n", (input1 + input2));
                break;
            case '-':
                printf("%d\n", (input1 - input2));
                break;
            case '/':
                if(input2 == 0) {
                    return 1;
                }
                printf("%d\n", (input1 / input2));
                break;
            case '*':
                printf("%d\n", (input1 * input2));
                break;
            default:
                return 1;
        }
    }
    return 0;
}
