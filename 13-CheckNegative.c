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
        float input = 0.0f;
        int i = 0;
        const char *str;
        str = argv[1];
        if(str[i] == '-') {
            i++;
        }
        if((i == 1) && (strlen(str) == 1)) {
            return 1;
        }
        for(; i < strlen(str); i++) {
            if(!isdigit(str[i]) && str[i]!='.') {
                return 1;
            }
        }
        input = atof(str);
        if(input < 0.0f) {
            printf("Negative\n");
        }
        else {
            printf("Positive\n");
        }
    }
    return 0;
}
