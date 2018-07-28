#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void reverse(const char *str[], int n, int len) {
    if(n != len) {
        reverse(str, n+1, len);
        printf("%s ", str[n]);
    }
}

int main(int argc, char const *argv[])
{
    if(argc == 1) {
        return 1;
    }
    else {
        const char *str[argc];
        for(int i = 0; i < argc; i++) {
            str[i] = argv[i+1];
        }
        reverse(str, 0, argc - 1);
        printf("\n");
    }
    return 0;
}
