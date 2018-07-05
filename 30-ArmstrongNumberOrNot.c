#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    if(argc != 2) {
        return 1;
    }
    else {
        int input = 0, len = 0, powSum = 0, tempInput = 0;
        const char *str;
        str = argv[1];
        int i = 0;
        if(str[i] == '-') {
            return 1; //assuming only positive numbers are armstrong
        }
        for(; i < strlen(str); i++) {
            if(!isdigit(str[i])) {
                return 1;
            }
        }
        input = atoi(str);
        tempInput = input;
        len = strlen(str);
        while(tempInput > 0) {
            powSum += pow((tempInput % 10), len);
            tempInput /= 10;
        }
        if(powSum == input) {
            printf("Armstrong Number\n");
        }
        else {
            printf("Not Armstrong Number\n");
        }
    }
    return 0;
}
