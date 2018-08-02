#include<stdio.h>
#include<stdlib.h> //only required for using atoi()
#include<string.h>
#include<ctype.h>
#include<stdbool.h>

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

int binarySearch(int arr[], int searchingElement, int size) {
    int left, right, mid;
    left = 0;
    right = size - 1;
    while(left <= right) {
        mid = left + (right - left) / 2;
        if(arr[mid] == searchingElement) {
            return mid;
        }
        else if(arr[mid] < searchingElement) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}

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

int main(int argc, char const *argv[])
{
    if(argc < 3) {
        return 1;
    }
    else {
        int searchingElement; //this will be the first argument, next all arguments will be elements of the array
        int n = argc - 1;
        int arr[10000];
        for(int i = 1; i <= n; i++) {
            if(!checkInput(argv[i])) {
                return 1;
            }
        }
        searchingElement = atoi(argv[1]);
        for(int i = 2; i <= n; i++) {
            arr[i - 2] = atoi(argv[i]);
        }
        int posn;
        posn = binarySearch(arr, searchingElement, n - 1);
        if(posn == -1) {
            printf("-1");
        }
        else {
            printf("%d\n", posn + 1);
        }
    }
    return 0;
}
