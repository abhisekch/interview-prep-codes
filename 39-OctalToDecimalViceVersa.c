#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int decimalToOctal(int dec) {
    int octalNum[1000];
    int i = 0;
    while(dec > 0) {
        octalNum[i] = dec % 8;
        dec /= 8;
        i++;
    }
    int retOct = 0;
    for(int j = i - 1; j >= 0; j--) {
        retOct = retOct * 10 + octalNum[j];
    }
    return retOct;
}

int octalToDecimal(int oct) {
    int retDec = 0;
    int lastDigit = 0;
    int base = 1;
    while(oct) {
        lastDigit = oct % 10;
        oct /= 10;
        retDec += lastDigit * base;
        base *= 8;
    }
    return retDec;
}

int main(int argc, char const *argv[])
{
    if(argc != 3) {
        return 1;
    }
    else {
        int input;
        const char *str1, *str2;
        str1 = argv[1];
        str2 = argv[2];
        int i = 0;
        if(strcmp(str1, "-d") == 0 || strcmp(str1, "-o") == 0) {
            if(strcmp(str1, "-o") == 0) {
                if(str2[i] == '-') {
                    return 1;
                }
                for(; i < strlen(str2); i++) {
                    if(!isdigit(str2[i]) || str2[i] == '8' || str2[i] == '9') {
                        return 1;
                    }
                }
                input = atoi(str2);
                int dec;
                dec = octalToDecimal(input);
                printf("%d\n", dec);
            }
            else {
                if(str2[i] == '-') {
                    return 1;
                }
                for(; i < strlen(str2); i++) {
                    if(!isdigit(str2[i])) {
                        return 1;
                    }
                }
                input = atoi(str2);
                int oct;
                oct = decimalToOctal(input);
                printf("%d\n", oct);
            }
        }
        else {
            return 1;
        }
    }
    return 0;
}
