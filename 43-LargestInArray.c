#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(int argc, char *argv[])
{
    if(argc == 1) {
        return 1;
    }
    else {
        char *str;
        int input;
        int max;
        int arr[argc];
        for(int i = 1; i < argc; i++) {
            str = argv[i];
            int j = 0;
            if(str[j] == '-') {
                j++;
            }
            for(; j < strlen(str); j++) {
                if(!isdigit(str[j])) {
                    return 1;
                }
            }
            input = atoi(str);
            arr[i-1] = input;
        }
        max = arr[0];
        for(int i = 1; i < argc - 1; i++) {
            if(max < arr[i]) {
                max = arr[i];
            }
        }
        printf("%d\n", max);
    }
    return 0;
}
