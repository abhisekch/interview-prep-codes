#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>

bool checkInput(const char *str) {
    int i = 0;
    if(str[i] == '-') {
        i++;
    }
    if((i == 1) && (strlen(str) == 1)) {
        return false;
    }
    for(; i < strlen(str); i++) {
        if(!isdigit(str[i])) {
            return false;
        }
    }
    return true;
}

void bubbleSort(int arr[], int size) {
    int temp;
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i -1; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    if(argc < 2) {
        return 1;
    }
    else {
        int n = argc - 1;
        int arr[10000];
        for(int i = 1; i <= n; i++) {
            if(!checkInput(argv[i])) {
                return 1;
            }
        }
        for(int i = 0; i < n; i++) {
            arr[i] = atoi(argv[i + 1]);
        }
        bubbleSort(arr, n);
        for(int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}
