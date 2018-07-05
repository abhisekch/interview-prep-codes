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
        int input = 0, divisorSum = 0;
        const char *str;
        str = argv[1];
        int i = 0;
        if(str[i] == '-') {
            return 1; //assuming only positive numbers are perfect
        }
        for(; i < strlen(str); i++) {
            if(!isdigit(str[i])) {
                return 1;
            }
        }
        input = atoi(str);
        for(int i = 1; i <= (input / 2); i++) {
            if((input % i) == 0) {
                printf("%d ", i);
                divisorSum += i;
            }
        }
        printf("%d\n", input);
        if(divisorSum == input) {
            printf("Perfect\n");
        }
        else {
            printf("Not Perfect\n");
        }
    }
    return 0;
}
