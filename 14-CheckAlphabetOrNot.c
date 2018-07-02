#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(int argc, char const *argv[])
{
    if(argc != 2) {
        return 1;
    }
    else {
        char ch;
        const char *str;
        str = argv[1];
        if(strlen(str) > 1) {
            return 1;
        }
        ch = str[0];
        /*if(((ch >= 65) && (ch <= 90)) || ((ch >= 97) && (ch <= 122))) {
            printf("Alphabet\n");
        }
        else {
            printf("Not Alphabet\n");
        }*/
        if(isalpha(ch)) {
            printf("Alphabet\n");
        }
        else {
            printf("Not Alphabet\n");
        }
    }
    return 0;
}
