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
        int input = 0, result = 0;
        const char *str;
        str = argv[1];
        int i = 0;
        int arr[10000]; // assuming at most 10000 fibonacci numbers are to be generated
        if(str[i] == '-') {
            i++;
        }
        if((i == 1) && (strlen(str) == 1)) {
            return 1;
        }
        for(; i < strlen(str); i++) {
            if(!isdigit(str[i])) {
                return 1;
            }
        }
        input = atoi(str);
        i = 0;
        while(1) {
            if(i == 0) {
                arr[i] = 0;
            }
            else if(i == 1) {
                arr[i] = 1;
            }
            else {
                arr[i] = arr[i-1] + arr[i-2];
            }
            if(arr[i] <= input) {
                printf("%d ", arr[i]);
            }
            else {
                break;
            }
            i++;
        }
        printf("\n");
    }
    return 0;
}
