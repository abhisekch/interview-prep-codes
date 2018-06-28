#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(int argc, char const *argv[])
{
    if(argc != 2) {
        return 1;
    }
    else {
        const char *str;
        char ch;
        str = argv[1];
        if(strlen(str) > 1) {
            return 1;
        }
        else if((*str < 'A') || ((*str > 'Z') && (*str < 'a')) || (*str > 'z')) {
            return 1;
        }
        else {
            ch = *str;
            ch = tolower(ch);
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                printf("Vowel\n");
            }
            else {
                printf("Consonant\n");
            }
        }
    }
    return 0;
}
