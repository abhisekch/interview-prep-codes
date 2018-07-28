#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int decimalToOctal(int dec) {
    int octalNum[1000];
    int  i = 0;
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

int decimalToBinary(int dec) {
    int binaryNum[1000];
    int i = 0;
    while(dec > 0) {
        binaryNum[i] = dec % 2;
        dec /= 2;
        i++;
    }
    int retBin = 0;
    for(int j = i - 1; j >= 0; j--) {
        retBin = retBin * 10 + binaryNum[j];
    }
    return retBin;
}

int binaryToDecimal(int bin) {
    int retDec = 0;
    int lastDigit = 0;
    int base = 1;
    while(bin) {
        lastDigit = bin % 10;
        bin /= 10;
        retDec += lastDigit * base;
        base *= 2;
    }
    return retDec;
}

int binaryToOctal(int bin) {
    int dec;
    dec = binaryToDecimal(bin);
    int oct;
    oct = decimalToOctal(dec);
    return oct;
}

int octalToBinary(int oct) {
    int dec;
    dec = octalToDecimal(oct);
    int bin;
    bin = decimalToBinary(dec);
    return bin;
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
        if(strcmp(str1, "-o") == 0 || strcmp(str1, "-b") == 0) {
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
                int bin;
                bin = octalToBinary(input);
                printf("%d\n", bin);
            }
            else {
                if(str2[i] == '-') {
                    return 1;
                }
                for(; i < strlen(str2); i++) {
                    if(!isdigit(str2[i]) || ((str2[i] != '0') && (str2[i] != '1'))) {
                        return 1;
                    }
                }
                input = atoi(str2);
                int oct;
                oct = binaryToOctal(input);
                printf("%d\n", oct);
            }
        }
    }
    return 0;
}
